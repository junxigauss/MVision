#include "mvMainFrame.h"
#include "mvCapture.h"
#include "mvConfig.h"
#include "mvTaskFrame.h"

using namespace mv;

MainFrame::MainFrame() {
}

MainFrame::~MainFrame(){
}

bool MainFrame::RunFromCapture(Config *pConfig, Capture *pCapture, TaskFrame *pTaskFrame) const {
    bool bRet = false;

    DataBase *pData = pCapture->GetFrame();

    pTaskFrame->Execute(pData);

    return bRet;
}