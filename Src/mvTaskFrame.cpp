#include "mvTaskFrame.h"
#include "mvIBaseTask.h"

using namespace mv;

void TaskFrame::Attach(const IBaseTask *task) {
    m_TaskList.push_back(task);
}

void TaskFrame::Detach(const IBaseTask *task) {
    m_TaskList.remove(task);
}

void TaskFrame::Execute(DataBase *pDataBase) const {
    for (auto &task : m_TaskList) {
        IBaseTask *pTask = const_cast<IBaseTask*>(task);
        pTask->RunTask(pDataBase);
    }
}