#ifndef MODELLIST_H_
#define MODELLIST_H_

class ModelNode
{
private:
    ModelPointer object;
    ModelNode* next;
    ModelNode* prev;
    
    //private Copy constructor
    ModelNode(const ModelNode& node) {};
    
    bool deleteLast();
   
public:
    ModelNode(ModelPointer object);
    ~ModelNode();
};

class ModelList
{
private:
    ModelNode* head;
    
public:
    void add(ModelPointer object);
    void del(ModelPointer object);
    int length();
    
    //constructor & destructor
    ModelList(ModelPointer object);
    ~ModelList();
    
};

#endif