#ifndef MVTASKSHOWCAPTURE_H
#define MVTASKSHOWCAPTURE_H

#include "mvIBaseTask.h"

namespace mv {
class TaskShowCapture : public IBaseTask {
public:
    virtual int RunTask(DataBase *pDat) override;
};
}

#endif