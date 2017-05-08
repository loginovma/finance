#ifndef MODELLIST_H_
#define MODELLIST_H_

#include "ModelPointer.h"

class ModelNode
{
private:
    ModelPointer object;
    
    //private Copy constructor
    ModelNode(const ModelNode& node);
    
    bool deleteLast();
   
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
    
public:
    void add(ModelPointer& object);
    //void del(ModelPointer object);
    ModelNode* getHead();
    int length();
    
    //constructor & destructor
    ModelList();
    ModelList(ModelPointer object);
    ~ModelList();
    
};

#endif