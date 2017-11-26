//
//  operation_image.cpp
//  Basic
//
//  Created by Feast on 2017/11/26.
//  Copyright © 2017年 Feast. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
    Mat img = imread("test.jpg");
    Mat grey;
    cvtColor(img, grey, COLOR_BGR2GRAY);
    
    Mat sobelx;
    Sobel(grey, sobelx, CV_32F, 1, 0);
    
    double minVal, maxVal;
    minMaxLoc(sobelx, &minVal, &maxVal);
    Mat draw;
    sobelx.convertTo(draw, CV_8U, 255.0 / (maxVal - minVal), -minVal * 255.0 / (maxVal - minVal));
    
    namedWindow("image", WINDOW_AUTOSIZE);
    imshow("image", draw);
    waitKey();
    
}
