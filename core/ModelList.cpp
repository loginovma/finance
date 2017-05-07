#include "ModelList.h"

bool ModelNode::deleteLast()
{
    ModelNode* current = this;
    
    while(current->next != 0) {
        current = current->next;
    }
    
    if (current->prev == 0) {
        return false;
    }
    
    current->prev->next = 0;
    delete current;
    
    return true;
    
}

ModelNode::ModelNode(ModelPointer object)
{
    this->object = object;
    this->next = 0;
    this->prev = 0;
}

ModelNode::~ModelNode()
{
    while ( this->deleteLast() );
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
    delete this->head;
}

//adding object to the end of the list
void ModelList::add(ModelPointer object)
{
    ModelNode* current = this->head;
    
    while(current->next != 0) {
        current = current->next;
    }
    
    current->next = new ModelNode(object)
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
