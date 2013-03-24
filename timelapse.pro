TEMPLATE = app
TARGET = timelapse 
unix:INCLUDEPATH += /usr/local/include/opencv \
    /usr/local/include/opencv2 \
    /usr/local/include \
    /usr/include/ 
    
 unix:LIBS += -L/usr/local/lib \
    -L/usr/lib \
    -lopencv_core \
    -lopencv_imgproc \
    -lopencv_highgui \
    -lopencv_ml \
    -lopencv_video \
    -lopencv_features2d \
    -lopencv_calib3d \
    -lopencv_objdetect \
    -lopencv_contrib \
    -lopencv_legacy \
    -lopencv_flann 
    

QT        += core gui 

HEADERS   += timelapse.h
SOURCES   += main.cpp \
    timelapse.cpp
FORMS     += timelapse.ui    
RESOURCES +=
