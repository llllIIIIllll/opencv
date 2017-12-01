
#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  

using namespace cv;

int main() {
	// 读入一张图片（test）    
	Mat img = imread("C:\\Users\\feast\\Desktop\\pic.jpg");
	// 创建一个名为 "test"窗口    
	namedWindow("test");
	// 在窗口中显示游戏原画    
	imshow("test", img);
	// 等待6000 ms后窗口自动关闭    
	waitKey(6000);
}