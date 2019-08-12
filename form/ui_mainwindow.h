/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBox_sport;
    QCheckBox *checkBox_music;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLabel *label_2;
    QComboBox *comboBox_year;
    QComboBox *comboBox_month;
    QComboBox *comboBox_day;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *checkBox_art;
    QCheckBox *checkBox_read;
    QCheckBox *checkBox_sleep;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(593, 614);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        checkBox_sport = new QCheckBox(centralWidget);
        checkBox_sport->setObjectName(QString::fromUtf8("checkBox_sport"));
        checkBox_sport->setGeometry(QRect(40, 290, 73, 16));
        checkBox_music = new QCheckBox(centralWidget);
        checkBox_music->setObjectName(QString::fromUtf8("checkBox_music"));
        checkBox_music->setGeometry(QRect(100, 290, 73, 16));
        radioButton_male = new QRadioButton(centralWidget);
        radioButton_male->setObjectName(QString::fromUtf8("radioButton_male"));
        radioButton_male->setGeometry(QRect(50, 100, 83, 16));
        radioButton_female = new QRadioButton(centralWidget);
        radioButton_female->setObjectName(QString::fromUtf8("radioButton_female"));
        radioButton_female->setGeometry(QRect(130, 100, 83, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 131, 51));
        label->setStyleSheet(QString::fromUtf8("font: 26pt \"3ds\";"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 451, 511, 101));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 400, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 131, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 24pt \"3ds\";"));
        comboBox_year = new QComboBox(centralWidget);
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->setObjectName(QString::fromUtf8("comboBox_year"));
        comboBox_year->setGeometry(QRect(40, 190, 69, 22));
        comboBox_month = new QComboBox(centralWidget);
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->setObjectName(QString::fromUtf8("comboBox_month"));
        comboBox_month->setGeometry(QRect(140, 190, 69, 22));
        comboBox_day = new QComboBox(centralWidget);
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->setObjectName(QString::fromUtf8("comboBox_day"));
        comboBox_day->setGeometry(QRect(240, 190, 69, 22));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 190, 20, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 190, 21, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(320, 190, 21, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 240, 141, 41));
        label_6->setStyleSheet(QString::fromUtf8("font: 24pt \"3ds\";"));
        checkBox_art = new QCheckBox(centralWidget);
        checkBox_art->setObjectName(QString::fromUtf8("checkBox_art"));
        checkBox_art->setGeometry(QRect(160, 290, 73, 16));
        checkBox_read = new QCheckBox(centralWidget);
        checkBox_read->setObjectName(QString::fromUtf8("checkBox_read"));
        checkBox_read->setGeometry(QRect(210, 290, 73, 16));
        checkBox_sleep = new QCheckBox(centralWidget);
        checkBox_sleep->setObjectName(QString::fromUtf8("checkBox_sleep"));
        checkBox_sleep->setGeometry(QRect(260, 290, 73, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 593, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox_sport->setText(QApplication::translate("MainWindow", "sport", nullptr));
        checkBox_music->setText(QApplication::translate("MainWindow", "music", nullptr));
        radioButton_male->setText(QApplication::translate("MainWindow", "male", nullptr));
        radioButton_female->setText(QApplication::translate("MainWindow", "female", nullptr));
        label->setText(QApplication::translate("MainWindow", "gender", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "submit", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "birthdate", nullptr));
        comboBox_year->setItemText(0, QApplication::translate("MainWindow", "2000", nullptr));
        comboBox_year->setItemText(1, QApplication::translate("MainWindow", "1999", nullptr));
        comboBox_year->setItemText(2, QApplication::translate("MainWindow", "1998", nullptr));
        comboBox_year->setItemText(3, QApplication::translate("MainWindow", "1997", nullptr));
        comboBox_year->setItemText(4, QApplication::translate("MainWindow", "1996", nullptr));
        comboBox_year->setItemText(5, QApplication::translate("MainWindow", "1995", nullptr));
        comboBox_year->setItemText(6, QApplication::translate("MainWindow", "1994", nullptr));
        comboBox_year->setItemText(7, QApplication::translate("MainWindow", "1993", nullptr));
        comboBox_year->setItemText(8, QApplication::translate("MainWindow", "1992", nullptr));
        comboBox_year->setItemText(9, QApplication::translate("MainWindow", "1991", nullptr));
        comboBox_year->setItemText(10, QApplication::translate("MainWindow", "1990", nullptr));

        comboBox_month->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBox_month->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        comboBox_month->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));
        comboBox_month->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));
        comboBox_month->setItemText(4, QApplication::translate("MainWindow", "5", nullptr));
        comboBox_month->setItemText(5, QApplication::translate("MainWindow", "6", nullptr));
        comboBox_month->setItemText(6, QApplication::translate("MainWindow", "7", nullptr));
        comboBox_month->setItemText(7, QApplication::translate("MainWindow", "8", nullptr));
        comboBox_month->setItemText(8, QApplication::translate("MainWindow", "9", nullptr));
        comboBox_month->setItemText(9, QApplication::translate("MainWindow", "10", nullptr));
        comboBox_month->setItemText(10, QApplication::translate("MainWindow", "11", nullptr));
        comboBox_month->setItemText(11, QApplication::translate("MainWindow", "12", nullptr));

        comboBox_day->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBox_day->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        comboBox_day->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));
        comboBox_day->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));
        comboBox_day->setItemText(4, QApplication::translate("MainWindow", "5", nullptr));
        comboBox_day->setItemText(5, QApplication::translate("MainWindow", "6", nullptr));
        comboBox_day->setItemText(6, QApplication::translate("MainWindow", "7", nullptr));
        comboBox_day->setItemText(7, QApplication::translate("MainWindow", "8", nullptr));
        comboBox_day->setItemText(8, QApplication::translate("MainWindow", "9", nullptr));
        comboBox_day->setItemText(9, QApplication::translate("MainWindow", "10", nullptr));
        comboBox_day->setItemText(10, QApplication::translate("MainWindow", "11", nullptr));
        comboBox_day->setItemText(11, QApplication::translate("MainWindow", "12", nullptr));
        comboBox_day->setItemText(12, QApplication::translate("MainWindow", "13", nullptr));
        comboBox_day->setItemText(13, QApplication::translate("MainWindow", "14", nullptr));
        comboBox_day->setItemText(14, QApplication::translate("MainWindow", "15", nullptr));
        comboBox_day->setItemText(15, QApplication::translate("MainWindow", "16", nullptr));
        comboBox_day->setItemText(16, QApplication::translate("MainWindow", "17", nullptr));
        comboBox_day->setItemText(17, QApplication::translate("MainWindow", "18", nullptr));
        comboBox_day->setItemText(18, QApplication::translate("MainWindow", "19", nullptr));
        comboBox_day->setItemText(19, QApplication::translate("MainWindow", "20", nullptr));
        comboBox_day->setItemText(20, QApplication::translate("MainWindow", "21", nullptr));
        comboBox_day->setItemText(21, QApplication::translate("MainWindow", "22", nullptr));
        comboBox_day->setItemText(22, QApplication::translate("MainWindow", "23", nullptr));
        comboBox_day->setItemText(23, QApplication::translate("MainWindow", "24", nullptr));
        comboBox_day->setItemText(24, QApplication::translate("MainWindow", "25", nullptr));
        comboBox_day->setItemText(25, QApplication::translate("MainWindow", "26", nullptr));
        comboBox_day->setItemText(26, QApplication::translate("MainWindow", "27", nullptr));
        comboBox_day->setItemText(27, QApplication::translate("MainWindow", "28", nullptr));
        comboBox_day->setItemText(28, QApplication::translate("MainWindow", "29", nullptr));
        comboBox_day->setItemText(29, QApplication::translate("MainWindow", "30", nullptr));
        comboBox_day->setItemText(30, QApplication::translate("MainWindow", "31", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "\345\271\264", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\234\210", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\346\227\245", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "interest", nullptr));
        checkBox_art->setText(QApplication::translate("MainWindow", "art", nullptr));
        checkBox_read->setText(QApplication::translate("MainWindow", "read", nullptr));
        checkBox_sleep->setText(QApplication::translate("MainWindow", "sleep", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
