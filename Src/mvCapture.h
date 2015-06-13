#ifndef MVCAPTURE_H
#define MVCAPTURE_H

#include "mvSingleton.h"

#include "opencv2/highgui/highgui.hpp"

namespace mv {
class DataBase;

class Capture {
public:
    Capture(DataBase *pDataBase, int device);

    bool IsOpen() const;

    DataBase* GetFrame();

private:
    DataBase *m_pDataBase;
    bool m_IsCapOK;
    cv::VideoCapture m_Cap;
};
}

#endif