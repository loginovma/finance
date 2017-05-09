#ifndef MODELLIST_H_
#define MODELLIST_H_

#include "ModelPointer.h"

class ModelNode
{
private:
    ModelPointer object;
    
    //private Copy constructor
    ModelNode(const ModelNode& node);
    
    
   
public:
    ModelNode(ModelPointer& obj);
    ~ModelNode();
    
    ModelNode* next;
    ModelNode* prev;
    ModelPointer& getNode();
};

class ModelList
{
private:
    ModelNode* head;
    bool deleteLast();
    
public:
    void add(ModelPointer& object);
    void del(const char* name);
    ModelNode* getHead();
    int length();
    
    //constructor & destructor
    ModelList();
    ModelList(ModelPointer object);
    ~ModelList();
    
};

#endif