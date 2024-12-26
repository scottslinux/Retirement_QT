/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSlider *wd_age_slider;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *startBal;
    QLineEdit *APR;
    QLabel *label65;
    QLabel *label75;
    QLabel *label80;
    QLabel *label70;
    QFrame *frame;
    QLineEdit *startAge;
    QLabel *label_10;
    QTextBrowser *textBox;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QLabel *WD_age;
    QLabel *WD_amnt;
    QSlider *wd_slider;
    QPushButton *WD_on_off_button;
    QLabel *on_offlabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1114, 913);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(222, 221, 218, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        wd_age_slider = new QSlider(centralwidget);
        wd_age_slider->setObjectName("wd_age_slider");
        wd_age_slider->setGeometry(QRect(603, 560, 160, 16));
        wd_age_slider->setMinimum(68);
        wd_age_slider->setMaximum(80);
        wd_age_slider->setOrientation(Qt::Orientation::Horizontal);
        wd_age_slider->setTickPosition(QSlider::TickPosition::TicksBelow);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 440, 341, 71));
        QPalette palette1;
        QBrush brush2(QColor(27, 88, 9, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush4(QColor(238, 238, 236, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(111, 110, 109, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(148, 147, 145, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(111, 110, 109, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush3);
        pushButton->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("P052")});
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        pushButton->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(603, 600, 155, 53));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(823, 600, 191, 53));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(260, 10, 611, 53));
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        startBal = new QLineEdit(centralwidget);
        startBal->setObjectName("startBal");
        startBal->setGeometry(QRect(240, 91, 125, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(246, 245, 244, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush11(QColor(250, 250, 249, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(123, 122, 122, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(164, 163, 163, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush14(QColor(123, 122, 122, 127));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush3);
        startBal->setPalette(palette2);
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        startBal->setFont(font3);
        APR = new QLineEdit(centralwidget);
        APR->setObjectName("APR");
        APR->setGeometry(QRect(240, 130, 125, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush3);
        APR->setPalette(palette3);
        APR->setFont(font3);
        label65 = new QLabel(centralwidget);
        label65->setObjectName("label65");
        label65->setGeometry(QRect(240, 230, 121, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        label65->setFont(font4);
        label65->setFrameShape(QFrame::Shape::Box);
        label75 = new QLabel(centralwidget);
        label75->setObjectName("label75");
        label75->setGeometry(QRect(240, 310, 121, 31));
        label75->setFont(font4);
        label75->setFrameShape(QFrame::Shape::Box);
        label80 = new QLabel(centralwidget);
        label80->setObjectName("label80");
        label80->setGeometry(QRect(240, 350, 121, 31));
        label80->setFont(font4);
        label80->setFrameShape(QFrame::Shape::Box);
        label70 = new QLabel(centralwidget);
        label70->setObjectName("label70");
        label70->setGeometry(QRect(240, 270, 121, 31));
        label70->setFont(font4);
        label70->setFrameShape(QFrame::Shape::Box);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 70, 381, 341));
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->setLineWidth(3);
        startAge = new QLineEdit(centralwidget);
        startAge->setObjectName("startAge");
        startAge->setGeometry(QRect(240, 170, 125, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush3);
        startAge->setPalette(palette4);
        startAge->setFont(font3);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(70, 170, 139, 23));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        textBox = new QTextBrowser(centralwidget);
        textBox->setObjectName("textBox");
        textBox->setGeometry(QRect(90, 520, 261, 331));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush15(QColor(127, 127, 127, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(170, 170, 170, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush17(QColor(127, 127, 127, 127));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush3);
        textBox->setPalette(palette5);
        textBox->setFont(font4);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(63, 93, 155, 23));
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 275, 65, 23));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 232, 65, 23));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 130, 139, 23));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 317, 65, 23));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 360, 65, 23));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gridWidget = new QWidget(centralwidget);
        gridWidget->setObjectName("gridWidget");
        gridWidget->setGeometry(QRect(440, 80, 631, 401));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setObjectName("gridLayout");
        WD_age = new QLabel(centralwidget);
        WD_age->setObjectName("WD_age");
        WD_age->setGeometry(QRect(643, 520, 81, 31));
        WD_age->setFont(font3);
        WD_age->setFrameShape(QFrame::Shape::Box);
        WD_age->setAlignment(Qt::AlignmentFlag::AlignCenter);
        WD_amnt = new QLabel(centralwidget);
        WD_amnt->setObjectName("WD_amnt");
        WD_amnt->setGeometry(QRect(853, 520, 121, 31));
        WD_amnt->setFont(font3);
        WD_amnt->setFrameShape(QFrame::Shape::Box);
        WD_amnt->setAlignment(Qt::AlignmentFlag::AlignCenter);
        wd_slider = new QSlider(centralwidget);
        wd_slider->setObjectName("wd_slider");
        wd_slider->setGeometry(QRect(833, 560, 181, 20));
        wd_slider->setMinimum(1);
        wd_slider->setMaximum(10);
        wd_slider->setSingleStep(1);
        wd_slider->setPageStep(5);
        wd_slider->setValue(1);
        wd_slider->setSliderPosition(1);
        wd_slider->setOrientation(Qt::Orientation::Horizontal);
        wd_slider->setTickPosition(QSlider::TickPosition::TicksBelow);
        wd_slider->setTickInterval(50000);
        WD_on_off_button = new QPushButton(centralwidget);
        WD_on_off_button->setObjectName("WD_on_off_button");
        WD_on_off_button->setGeometry(QRect(513, 530, 71, 51));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush18(QColor(143, 240, 164, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush19(QColor(199, 247, 209, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(72, 120, 82, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(95, 160, 109, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush22(QColor(72, 120, 82, 127));
        brush22.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        QBrush brush23(QColor(209, 255, 219, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush23);
        WD_on_off_button->setPalette(palette6);
        WD_on_off_button->setAutoFillBackground(true);
        WD_on_off_button->setCheckable(true);
        on_offlabel = new QLabel(centralwidget);
        on_offlabel->setObjectName("on_offlabel");
        on_offlabel->setGeometry(QRect(510, 590, 71, 31));
        on_offlabel->setFont(font4);
        on_offlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        label_4->raise();
        label_3->raise();
        label_2->raise();
        label_5->raise();
        label_6->raise();
        frame->raise();
        wd_age_slider->raise();
        pushButton->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        startBal->raise();
        APR->raise();
        label65->raise();
        label75->raise();
        label80->raise();
        label70->raise();
        startAge->raise();
        label_10->raise();
        textBox->raise();
        gridWidget->raise();
        WD_age->raise();
        WD_amnt->raise();
        wd_slider->raise();
        WD_on_off_button->raise();
        on_offlabel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1114, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Nest Egg", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Amortize", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Withdrawal Age", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Annual Withdrawal\n"
" Amount", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Retirement Visualizer", nullptr));
        label65->setText(QString());
        label75->setText(QString());
        label80->setText(QString());
        label70->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Starting Age", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Starting Balance", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Age 70", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Age 65", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "AVG Annual % ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Age 75", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Age 80", nullptr));
        WD_age->setText(QString());
        WD_amnt->setText(QString());
        WD_on_off_button->setText(QCoreApplication::translate("MainWindow", "Withdrawl\n"
" off/on", nullptr));
        on_offlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
