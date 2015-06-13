#ifndef MVTASKFRAME_H
#define MVTASKFRAME_H

#include <list>
#include "mvCommon.h"

namespace mv {
class IBaseTask;
class DataBase;

class TaskFrame{
public:
    void Attach(const IBaseTask *task);

    void Detach(const IBaseTask *task);

    void Execute(DataBase *pDataBase) const;

private:
    std::list<const IBaseTask*> m_TaskList;
};
}
#endif