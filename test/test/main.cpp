#include <stdio.h>
#include <opencv2/core/mat.hpp>
#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>


#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv )
{
 if ( argc != 2 )
 {
 printf("usage: DisplayImage.out <Image_Path>\n");
 return -1;
 }

 Mat image;
 image = imread( argv[1], IMREAD_COLOR );

 if ( !image.data )
 {
 printf("No image data \n");
 return -1;
 }
 namedWindow("BING BONG", WINDOW_AUTOSIZE );
 imshow("BING BONG", image);

 waitKey(0);

 return 0;
}
