#include "opencv2/opencv.hpp"

int main()
{
	cv::namedWindow("1coro_bot", cv::WINDOW_AUTOSIZE);
	cv::VideoCapture cap;
	cap.open("D:/videos/Desktop 2019.07.19 - 17.53.14.01.mp4");
	if (!cap.isOpened()) {
		return -1;
	}

	double fps = cap.get(cv::CAP_PROP_FPS);

	cv::Mat frame;
	for (;;) {
		cap >> frame;
		if (frame.empty()) break;
		cv::imshow("miku_movie", frame);
		if ((char)cv::waitKey((int)1000 / fps) >= 0) break;
	}
}