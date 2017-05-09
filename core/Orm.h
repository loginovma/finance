#ifndef ORM_H_
#define ORM_H_

#include "ModelList.h"

class Orm
{
public:
    virtual void loadBanks(ModelList& list) = 0;
    virtual void loadAccs(ModelList& accounts, ModelList& banks) = 0;
    virtual void storeBanks(ModelList& list) = 0;
    virtual void storeAccs(ModelList& accounts) = 0;
};

#endif