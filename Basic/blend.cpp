//
//  blend.cpp
//  Basic
//
//  Created by Feast on 2017/11/26.
//  Copyright © 2017年 Feast. All rights reserved.
//

#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

int main(void)
{
    double alpha = 0.5;
    double beta;
    double input;
    
    Mat src1, src2, dst;
    
    cout << " Simple Linear Blender " << endl;
    cout << "-----------------------" << endl;
    cout << "* Enter alpha [0.0-1.0]: ";
    cin >> input;
    
    if( input >= 0 && input <= 1 )
    { alpha = input; }
    src1 = imread( "test.jpg" );
    src2 = imread( "test.jpg" );
    
    if( src1.empty() ) { cout << "Error loading src1" << endl; return -1; }
    if( src2.empty() ) { cout << "Error loading src2" << endl; return -1; }
    beta = ( 1.0 - alpha );
    addWeighted( src1, alpha, src2, beta, 0.0, dst);
    imshow( "Linear Blend", dst );
    waitKey(0);
    
    return 0;
}











