#include <iostream>
#include <opencv2/opencv.hpp>

int main() {


    std::cout << "Hello, OpenCV!" << std::endl;

    cv::Mat image = cv::imread("lena.jpeg");
    if (image.empty()) {
        std::cout << "Could not open or find the image" << std::endl;
        return -1;
    }
    cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display window", image);
    cv::waitKey(0);


    return 0;
   
}