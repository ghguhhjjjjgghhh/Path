/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <mapview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    MapView *graphicsView;
    QPushButton *findPathButton;
    QLabel *statusLabel;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1800, 1000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new MapView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 1800, 1000));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        graphicsView->setFont(font);
        graphicsView->setStyleSheet(QString::fromUtf8("background-color:#6a93a3;"));
        findPathButton = new QPushButton(centralwidget);
        findPathButton->setObjectName("findPathButton");
        findPathButton->setGeometry(QRect(90, 270, 181, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223")});
        font1.setPointSize(25);
        findPathButton->setFont(font1);
        findPathButton->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;"));
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(90, 350, 181, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        statusLabel->setFont(font2);
        statusLabel->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 561, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font3.setPointSize(25);
        font3.setItalic(false);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("background-color: #6a93a3; color: #F8F5F2; \n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1800, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        findPathButton->setText(QCoreApplication::translate("MainWindow", "\345\257\273\350\267\257", nullptr));
        statusLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\233\275\347\237\263\346\262\271\345\244\247\345\255\246\357\274\210\345\215\216\344\270\234\357\274\211\346\240\241\345\233\255\345\257\274\350\210\252\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
