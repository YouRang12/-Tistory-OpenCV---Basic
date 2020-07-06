#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>

using namespace cv;

int main()
{
	Mat img = imread("test.png");

	imshow("window Name", img);
	waitKey(0);
	return 0;
}



