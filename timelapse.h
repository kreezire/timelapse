#ifndef TIMELAPSE_H
#define TIMELAPSE_H

#include <QtGui/QWidget>
#include "ui_timelapse.h"

class timelapse : public QWidget
{
    Q_OBJECT

public:
    timelapse(QWidget *parent = 0);
    ~timelapse();

private:
    Ui::timelapseClass ui;
};

#endif // TIMELAPSE_H
