#ifndef FILE_H_
#define FILE_H_

#include "Orm.h"

class File : public Orm
{
public:
    void loadBanks(ModelList& list);
    //void loadAccs(ModelList& list);
};

#endif