/********************************************************************************
** Form generated from reading UI file 'timelapse.ui'
**
** Created: Thu Jan 24 00:30:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMELAPSE_H
#define UI_TIMELAPSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timelapseClass
{
public:

    void setupUi(QWidget *timelapseClass)
    {
        if (timelapseClass->objectName().isEmpty())
            timelapseClass->setObjectName(QString::fromUtf8("timelapseClass"));
        timelapseClass->resize(400, 300);

        retranslateUi(timelapseClass);

        QMetaObject::connectSlotsByName(timelapseClass);
    } // setupUi

    void retranslateUi(QWidget *timelapseClass)
    {
        timelapseClass->setWindowTitle(QApplication::translate("timelapseClass", "timelapse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class timelapseClass: public Ui_timelapseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMELAPSE_H
