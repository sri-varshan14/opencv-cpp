#include "myopencvfunc/readimg.hpp"
#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>

extern void readImg(std::string path){
    cv::Mat img = cv::imread(path,cv::IMREAD_ANYCOLOR);
    cv::namedWindow("Image");
    cv::imshow("Image",img);
    cv::waitKey(0);
    cv::destroyAllWindows();
}