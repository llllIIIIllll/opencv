
#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  

using namespace cv;

int main() {
	// ����һ��ͼƬ��test��    
	Mat img = imread("C:\\Users\\feast\\Desktop\\pic.jpg");
	// ����һ����Ϊ "test"����    
	namedWindow("test");
	// �ڴ�������ʾ��Ϸԭ��    
	imshow("test", img);
	// �ȴ�6000 ms�󴰿��Զ��ر�    
	waitKey(6000);
}