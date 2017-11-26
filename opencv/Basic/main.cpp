//
//  main.cpp
//  opencv
//
//  Created by Feast on 2017/11/24.
//  Copyright © 2017年 Feast. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    const cv::String input_file = "test.jpg";
    
    //! Mat
    // reference counter  only copy header info
    Mat A, C;                                       // creates just the header parts
    
    A = imread(input_file, IMREAD_COLOR);       // here we'll know method used (allocate matrix)
    Mat B(A);
    C = A;
    
    cout << A.rows << " " << A.cols;
    Mat D(A, Rect(10, 10, 100, 100));                 // using a rectangle
    Mat E = A(Range::all(), Range(1, 3));            // using row and column boundaries
    
    // copy the matrix itself
    Mat F = A.clone();
    Mat G;
    A.copyTo(G);
    
    //! Storing methods
    
    //! Creating a Mat object explicitly
    
    /// cv::Mat::Mat Constructor
    Mat M(2, 2, CV_8UC3, Scalar(0, 0, 255));
    //CV_[The number of bits per item][Signed or Unsigned][Type Prefix]C[The channel number]
    std::cout << "M = " << std::endl << " " << M << std::endl;
    int sz[3] = {2, 2, 2};
    Mat L(3, sz, CV_8UC(1), Scalar::all(0));
    
    /// cv::Mat::create
    M.create(4, 4, CV_8UC(2));
    std::cout << "M = " << std::endl << " " << M << std::endl;

    /// MATLAB style initializer cv::Mat::zeros cv::Mat::ones cv::Mat::eye
    Mat ME = Mat::eye(4, 4, CV_64F);
    cout << "ME = " << endl << " " << ME << endl << endl;
    Mat O = Mat::ones(2, 2, CV_32F);
    cout << "O = " << endl << " " << O << endl << endl;
    Mat Z = Mat::zeros(3,3, CV_8UC1);
    cout << "Z = " << endl << " " << Z << endl << endl;

	Mat c = (Mat_<double>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
	cout << "c = " << endl << " " << c << endl; 

	//c = (Mat_<double>({0, -1, 0, -1, 5, -1, 0, -1, 0})).reshape(3);
	//cout << "c = " << endl << " " << c << endl;

	/// cv::Mat::clone cv::Mat::copyTo
	Mat RowClone = c.row(1).clone();
	cout << "RowClone = " << endl << " " <<  RowClone << endl;
	
	Mat R = Mat(3, 2, CV_8UC3);
	randu(R, Scalar::all(0), Scalar::all(255));

    
    std::cout << "Hello, World!\n";
    return 0;
}

