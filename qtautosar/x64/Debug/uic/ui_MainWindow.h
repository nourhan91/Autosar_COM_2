/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *speed;
    QLabel *label_3;
    QLabel *degree;
    QLabel *label_5;
    QLabel *larrow_b;
    QLabel *light_b;
    QLabel *fuel_b;
    QLabel *fix_b;
    QLabel *battery_b;
    QLabel *opendoor_b;
    QLabel *rarrow_b;
    QCheckBox *larrow_c;
    QLabel *label_6;
    QCheckBox *rarrow_c;
    QCheckBox *fix_c;
    QCheckBox *battery_c;
    QCheckBox *light_c;
    QCheckBox *opendoor_c;
    QCheckBox *fuel_c;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLabel *output;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(920, 421);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        MainWindowClass->setMinimumSize(QSize(920, 421));
        MainWindowClass->setMaximumSize(QSize(920, 421));
        MainWindowClass->setCursor(QCursor(Qt::ArrowCursor));
        MainWindowClass->setAutoFillBackground(false);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, -10, 981, 491));
        label->setPixmap(QPixmap(QString::fromUtf8("dash.png")));
        speed = new QLabel(centralwidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(90, 200, 91, 61));
        speed->setStyleSheet(QString::fromUtf8("\n"
"						color: white;\n"
"						font-size: 50px;\n"
"					"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 250, 41, 21));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"						color: white;\n"
"						font-size: 10px;\n"
"					"));
        degree = new QLabel(centralwidget);
        degree->setObjectName(QString::fromUtf8("degree"));
        degree->setGeometry(QRect(780, 210, 31, 51));
        degree->setStyleSheet(QString::fromUtf8("\n"
"						color: white;\n"
"						font-size: 50px;\n"
"					"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 20, 471, 241));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"						#centralWidget {\n"
"						border-image: url(:/res/background.jpg) 0 0 0 0 stretch stretch;\n"
"						}\n"
"					"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/2022-06-25 at 15-10-25.png")));
        larrow_b = new QLabel(centralwidget);
        larrow_b->setObjectName(QString::fromUtf8("larrow_b"));
        larrow_b->setGeometry(QRect(170, 130, 41, 31));
        larrow_b->setPixmap(QPixmap(QString::fromUtf8("Oparrow.png")));
        light_b = new QLabel(centralwidget);
        light_b->setObjectName(QString::fromUtf8("light_b"));
        light_b->setGeometry(QRect(440, 280, 49, 31));
        light_b->setPixmap(QPixmap(QString::fromUtf8("lightOn.png")));
        fuel_b = new QLabel(centralwidget);
        fuel_b->setObjectName(QString::fromUtf8("fuel_b"));
        fuel_b->setGeometry(QRect(230, 280, 51, 31));
        fuel_b->setPixmap(QPixmap(QString::fromUtf8("lowfuel.png")));
        fix_b = new QLabel(centralwidget);
        fix_b->setObjectName(QString::fromUtf8("fix_b"));
        fix_b->setGeometry(QRect(650, 280, 41, 31));
        fix_b->setPixmap(QPixmap(QString::fromUtf8("fix.png")));
        battery_b = new QLabel(centralwidget);
        battery_b->setObjectName(QString::fromUtf8("battery_b"));
        battery_b->setGeometry(QRect(550, 280, 31, 31));
        battery_b->setPixmap(QPixmap(QString::fromUtf8("batterydown.png")));
        opendoor_b = new QLabel(centralwidget);
        opendoor_b->setObjectName(QString::fromUtf8("opendoor_b"));
        opendoor_b->setGeometry(QRect(340, 280, 31, 31));
        opendoor_b->setPixmap(QPixmap(QString::fromUtf8("opendoor.png")));
        rarrow_b = new QLabel(centralwidget);
        rarrow_b->setObjectName(QString::fromUtf8("rarrow_b"));
        rarrow_b->setGeometry(QRect(710, 130, 41, 31));
        rarrow_b->setPixmap(QPixmap(QString::fromUtf8("arrow.png")));
        larrow_c = new QCheckBox(centralwidget);
        larrow_c->setObjectName(QString::fromUtf8("larrow_c"));
        larrow_c->setGeometry(QRect(80, 90, 76, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 300, 461, 20));
        rarrow_c = new QCheckBox(centralwidget);
        rarrow_c->setObjectName(QString::fromUtf8("rarrow_c"));
        rarrow_c->setGeometry(QRect(790, 90, 76, 20));
        fix_c = new QCheckBox(centralwidget);
        fix_c->setObjectName(QString::fromUtf8("fix_c"));
        fix_c->setGeometry(QRect(660, 340, 76, 20));
        battery_c = new QCheckBox(centralwidget);
        battery_c->setObjectName(QString::fromUtf8("battery_c"));
        battery_c->setGeometry(QRect(560, 340, 76, 20));
        light_c = new QCheckBox(centralwidget);
        light_c->setObjectName(QString::fromUtf8("light_c"));
        light_c->setGeometry(QRect(460, 340, 76, 20));
        opendoor_c = new QCheckBox(centralwidget);
        opendoor_c->setObjectName(QString::fromUtf8("opendoor_c"));
        opendoor_c->setGeometry(QRect(350, 340, 76, 20));
        fuel_c = new QCheckBox(centralwidget);
        fuel_c->setObjectName(QString::fromUtf8("fuel_c"));
        fuel_c->setEnabled(true);
        fuel_c->setGeometry(QRect(240, 340, 76, 20));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 350, 160, 22));
        horizontalSlider->setMaximum(240);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(centralwidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(720, 350, 160, 22));
        horizontalSlider_2->setMaximum(8);
        horizontalSlider_2->setPageStep(2);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        output = new QLabel(centralwidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(180, 360, 131, 16));
        output->setStyleSheet(QString::fromUtf8("color:white"));
        MainWindowClass->setCentralWidget(centralwidget);
        larrow_c->raise();
        rarrow_c->raise();
        fix_c->raise();
        horizontalSlider_2->raise();
        battery_c->raise();
        light_c->raise();
        opendoor_c->raise();
        fuel_c->raise();
        horizontalSlider->raise();
        label->raise();
        speed->raise();
        label_3->raise();
        degree->raise();
        label_5->raise();
        larrow_b->raise();
        light_b->raise();
        fuel_b->raise();
        fix_b->raise();
        battery_b->raise();
        opendoor_b->raise();
        rarrow_b->raise();
        label_6->raise();
        output->raise();
        statusbar = new QStatusBar(MainWindowClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowClass->setStatusBar(statusbar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "Dashboard (Server)", nullptr));
        label->setText(QString());
        speed->setText(QCoreApplication::translate("MainWindowClass", "<html><head/><body><p><span style=\" font-size:38pt;\">0</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowClass", "km/h", nullptr));
        degree->setText(QCoreApplication::translate("MainWindowClass", "0", nullptr));
        label_5->setText(QString());
        larrow_b->setText(QString());
        light_b->setText(QString());
        fuel_b->setText(QString());
        fix_b->setText(QString());
        battery_b->setText(QString());
        opendoor_b->setText(QString());
        rarrow_b->setText(QString());
        larrow_c->setText(QCoreApplication::translate("MainWindowClass", "CheckBox", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindowClass", "TextLabel", nullptr));
        rarrow_c->setText(QCoreApplication::translate("MainWindowClass", "CheckBox", nullptr));
        fix_c->setText(QCoreApplication::translate("MainWindowClass", "CheckBox", nullptr));
        battery_c->setText(QCoreApplication::translate("MainWindowClass", "CheckBox", nullptr));
        light_c->setText(QCoreApplication::translate("MainWindowClass", "CheckBox", nullptr));
        opendoor_c->setText(QCoreApplication::translate("MainWindowClass", "CheckBox", nullptr));
        fuel_c->setText(QCoreApplication::translate("MainWindowClass", "CheckBox", nullptr));
        output->setText(QCoreApplication::translate("MainWindowClass", "output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
