#include<opencv2/opencv.hpp>
using namespace cv;
int main() {
    Mat img = imread("cat2.jpg");
    if (img.empty()) {
        printf("Could not open or find the image\n");
        return -1;
    }
    imshow("Display window", img);
    waitKey(0);
    return 0;
}