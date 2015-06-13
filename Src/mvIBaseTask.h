#ifndef MVIBASETASK_H
#define MVIBASETASK_H

#include "mvCommon.h"

namespace mv {
class DataBase;

interface IBaseTask {
public:
    virtual int RunTask(DataBase *pDat) = 0;
};
}

#endif