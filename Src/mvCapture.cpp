#include "mvCapture.h"

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"

using namespace mv;

Capture::Capture(DataBase *pDataBase, int device) : m_pDataBase(pDataBase) {
    m_IsCapOK = m_Cap.open(device);
}

bool mv::Capture::IsOpen() const {
    return m_Cap.isOpened();
}

DataBase* mv::Capture::GetFrame() {
    if (!m_IsCapOK) {
        return nullptr;
    }
    // TODO: Get Mat From m_Cap.read()
    //m_Cap.read();
    return m_pDataBase;
}