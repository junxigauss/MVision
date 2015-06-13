#ifndef MVMAINFRAME_H
#define MVMAINFRAME_V

namespace mv {
class Config;
class Capture;
class TaskFrame;

class MainFrame {
public:
    MainFrame();
    ~MainFrame();

    bool RunFromCapture(Config *pConfig, Capture *pCapture, TaskFrame *pTaskFrame) const;
};
}

#endif