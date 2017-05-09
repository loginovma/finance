#include "ModelList.h"
#include <iostream>
#include <string.h>

using namespace std;

/*bool ModelNode::deleteLast()
{
    ModelNode* current = this;
    ModelNode* prev = 0;
    
    while(current->next != 0) {
        prev = current;
        current = current->next;
    }
    
    if (prev == 0) {
        return false;
    }
    
    delete current;
    prev->next = 0;
    
    return true;
    
}*/

ModelNode::ModelNode(ModelPointer& obj) : object(obj)
{
    this->next = 0;
    this->prev = 0;
}

ModelNode::~ModelNode()
{
    std::cout << "ModelNode destructor start" << std::endl;
    //delete this;
}

ModelPointer& ModelNode::getNode()
{
    return object;
}

bool ModelList::deleteLast()
{
    ModelNode* current = this->head;
        
    while(current->next != 0) {
        current = current->next;
    }
        
    ModelNode* prev = current->prev;
        
    if (prev == 0) {
        return false;
    }
        
    delete current;
    prev->next = 0;
    
    return true;
        
}

ModelList::ModelList()
{
    this->head = 0;
}

ModelList::ModelList(ModelPointer object)
{
    this->head = new ModelNode(object);
}

ModelList::~ModelList()
{
    std::cout << "ModelList destructor start" << std::endl;
    while( this->deleteLast() );
    delete this->head;
}

//adding object to the end of the list
void ModelList::add(ModelPointer& object)
{
    if ( !this->length() ) {
        this->head = new ModelNode(object);
        return;
    }
    
    ModelNode* current = this->head;
    
    while(current->next != 0) {
        current = current->next;
    }
    
    current->next = new ModelNode(object);
    current->next->prev = current;
}

void ModelList::del(const char* name)
{
    ModelNode* current = this->head;
    
    bool found = false;
    
    while(1) {
        if( !strcmp(current->getNode().ptr()->getName(), name) ) {
            cout << "Record has been found" << endl;
            found = true;
            break;
        }
        
        if (current->next == 0) {
            cout << "Record not found" << endl;
            break;
        }
        current = current->next;
    }
    
    if (!found) {
        return;
    }
    
    char confirm = 'n';
    cout << "Confirm deleting " << name << endl;
    
    //cin.ignore();
    cin >> confirm;
        
    if (confirm != 'y') {
        cout << "Deletion aborted" << endl;
        return;    
    }
    
    if (current->prev != 0) {
        current->prev->next = current->next;
    } else {
        this->head = current->next;
    }
    
    if (current->next != 0) {
        current->next->prev = current->prev;
    }
    
    delete current;
}

int ModelList::length()
{
    int counter = 0;
    
    for (ModelNode* current = this->head; current != 0; current = current->next) {
        counter++;
    }
    
    return counter;
}

ModelNode* ModelList::getHead()
{
    return this->head;
}
