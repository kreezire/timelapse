#include "timelapse.h"
#include "cv.h"
#include<highgui.h>
#define fps 6
#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
   /* QApplication a(argc, argv);
    timelapse w;
    w.show();
    return a.exec();*/

	cvNamedWindow( "Example2", CV_WINDOW_AUTOSIZE );
	CvCapture* capture = cvCreateFileCapture( "/media/9016-4EF8/MP_ROOT/101MNV01/M4H01774.MP4" );
	double fps1 = cvGetCaptureProperty (
	capture,
	CV_CAP_PROP_FPS
	);

	IplImage* frame;

		CvVideoWriter *writer =cvCreateVideoWriter("video8.avi",CV_FOURCC('M','J','P','G'),fps ,cvSize((int)cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_WIDTH),(int)cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_HEIGHT)));
		int i=0;
	    while((frame=cvQueryFrame(capture))!= NULL)
	    {
	        //cout<<"Afgdjkgk";
			if(!i)
	        {cvWriteFrame(writer,frame);

	        cvShowImage("asd",frame);
	        cvWaitKey(2);
	        }
			i=(i+1) % int(fps1*2);
	        //
	    }

}
