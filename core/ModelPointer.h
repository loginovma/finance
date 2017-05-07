#ifndef MODELPOINTER_H_
#define MODELPOINTER_H_

#include "../model/Model.h"


class ModelStorage
{
private:
    Model* pObj;
    int counter;
    
public:
    void storeObject(Model* pObj);
    void incrCount();
    void decrCount();
    int getStorageCount();
    Model* getpObject();
    
    ModelStorage(Model* pObj);
    ~ModelStorage();
    
};

class ModelPointer
{
private:
    ModelStorage* container;
    
public:
    ModelPointer(Model* pObj);
    ~ModelPointer();
    Model* ptr() const;
    
    //Copy Constructor and operator= overload
    ModelPointer(const ModelPointer &p);
    ModelPointer& operator= (const ModelPointer p);
};

#endif