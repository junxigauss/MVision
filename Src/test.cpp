#include "glog/logging.h"
#include "tinyxml/tinyxml2.h"

int main(int argc, char **argv) {
    google::InitGoogleLogging(argv[0]);
    google::SetLogDestination(google::GLOG_INFO, "./log");

    LOG(INFO) << "************************" << __FUNCTION__ << "************************ End!\n";

    google::ShutdownGoogleLogging();
    return 0;
}