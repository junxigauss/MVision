#include "glog/logging.h"
#include "tinyxml/tinyxml2.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"

#ifdef _DEBUG
int main(int argc, char **argv) {
    google::InitGoogleLogging(argv[0]);
    //google::SetLogDestination(google::GLOG_INFO, "./log");
    LOG(INFO) << "****" << __FUNCTION__ << "***** Start!\n";

    cv::VideoWriter vw("test.avi", -1, 25.0, cv::Size(640, 480));
    bool b = vw.isOpened();

    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        return -2;
    }

    cv::Mat frame;
    cv::namedWindow("Capture", CV_WINDOW_AUTOSIZE);

    bool stop = false;
    while (!stop) {
        cap >> frame;
        vw << frame;
        cv::imwrite("a.jpg", frame);
        imshow("Capture", frame);
        if (cv::waitKey(30) >= 0)
            stop = true;
    }

    LOG(INFO) << "*****" << __FUNCTION__ << "***** End!\n";
    google::ShutdownGoogleLogging();
    return 0;
}
#endif