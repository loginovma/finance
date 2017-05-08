#include "ModelList.h"
#include <iostream>

bool ModelNode::deleteLast()
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
    
}

ModelNode::ModelNode(ModelPointer& obj) : object(obj)
{
    this->next = 0;
    this->prev = 0;
}

ModelNode::~ModelNode()
{
    std::cout << "ModelNode destructor start" << std::endl;
    while ( this->deleteLast() );
}

ModelPointer& ModelNode::getNode()
{
    return object;
}

/*bool ModelList::deleteLast()
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
        
}*/

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