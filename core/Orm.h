#ifndef ORM_H_
#define ORM_H_

#include "ModelList.h"

class Orm
{
public:
    virtual void loadBanks(ModelList& list) = 0;
    //virtual void loadAccs(ModelList& list);
};

#endif