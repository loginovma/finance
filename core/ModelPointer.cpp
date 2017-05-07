#include "ModelPointer.h"
#include "../model/Model.h"

ModelStorage::ModelStorage(Model* pObj)
{
    this->counter = 0;
    this->storeObject(pObj);
}

void ModelStorage::storeObject(Model* pObj)
{
    this->pObj = pObj;
    this->incrCount();
}

int ModelStorage::getStorageCount()
{
    return this->counter;
}

void ModelStorage::incrCount()
{
    this->counter++;
}

void ModelStorage::decrCount()
{
    this->counter--;
}

Model* ModelStorage::getpObject()
{
    return this->pObj;
}


ModelPointer::ModelPointer(const ModelPointer &p)
{
    this->container = p.container;
    this->container->incrCount();
}

ModelPointer& ModelPointer::operator= (const ModelPointer p)
{
    this->container->decrCount();
    
    if ( !container->getStorageCount() ) {
        delete this->container;
    }
    
    this->container = p.container;
    this->container->incrCount();
}

ModelStorage::~ModelStorage()
{
    delete this->pObj;
}

ModelPointer::ModelPointer(Model* pObj)
{
    this->container = new ModelStorage(pObj);
}

ModelPointer::~ModelPointer()
{
    container->decrCount();
    
    if( !container->getStorageCount() ) {
        delete this->container;
    }
}

Model* ModelPointer::ptr() const
{
    return container->getpObject();
}
