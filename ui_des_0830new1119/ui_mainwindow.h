/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Apr 28 00:34:32 2022
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *lab_bt_in;
    QPushButton *Button_in;
    QLabel *lab_title_state;
    QLabel *lab_title_posi;
    QLabel *lab_title_control;
    QLabel *lab_bt_out;
    QPushButton *Button_out;
    QLabel *lab_bt_stop;
    QPushButton *Button_stop;
    QLabel *lab_bt_change;
    QPushButton *Button_change;
    QLabel *lab_sys_title;
    QLabel *lab_sys_txt;
    QPushButton *Button_config;
    QPushButton *Button_language_change;
    QLabel *lab_config;
    QLabel *lab_title_man;
    QLabel *lab_light1;
    QLabel *lab_light2;
    QLabel *lab_light3;
    QLabel *lab_light1_txt;
    QLabel *lab_light2_txt;
    QLabel *lab_light3_txt;
    QLabel *lab_posi_txt;
    QLabel *lab_posi_mm;
    QLCDNumber *lcdNum_posi;
    QPushButton *Button_StarThread;
    QPushButton *Button_StopThread;
    QLCDNumber *lcdNum_test;
    QPushButton *Button_test;
    QLabel *lab_time;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 800);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("#centralWidget{\n"
"border-image: url(:/png/main_ui.jpg);\n"
"}"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lab_bt_in = new QLabel(frame);
        lab_bt_in->setObjectName(QString::fromUtf8("lab_bt_in"));
        lab_bt_in->setGeometry(QRect(640, 620, 120, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lab_bt_in->sizePolicy().hasHeightForWidth());
        lab_bt_in->setSizePolicy(sizePolicy);
        lab_bt_in->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        Button_in = new QPushButton(frame);
        Button_in->setObjectName(QString::fromUtf8("Button_in"));
        Button_in->setGeometry(QRect(640, 500, 120, 120));
        sizePolicy.setHeightForWidth(Button_in->sizePolicy().hasHeightForWidth());
        Button_in->setSizePolicy(sizePolicy);
        Button_in->setStyleSheet(QString::fromUtf8("border-image: url(:/png/bt_in_def.jpg);"));
        Button_in->setCheckable(true);
        Button_in->setAutoExclusive(true);
        Button_in->setAutoDefault(false);
        Button_in->setDefault(true);
        lab_title_state = new QLabel(frame);
        lab_title_state->setObjectName(QString::fromUtf8("lab_title_state"));
        lab_title_state->setGeometry(QRect(1027, 152, 221, 45));
        lab_title_state->setStyleSheet(QString::fromUtf8("border-radius:5px;color:#FFFFFF;background:rgb(38,104,157);"));
        lab_title_posi = new QLabel(frame);
        lab_title_posi->setObjectName(QString::fromUtf8("lab_title_posi"));
        lab_title_posi->setGeometry(QRect(40, 152, 977, 45));
        lab_title_posi->setStyleSheet(QString::fromUtf8("border-radius:5px;color:#FFFFFF;background:rgb(38,104,157);"));
        lab_title_control = new QLabel(frame);
        lab_title_control->setObjectName(QString::fromUtf8("lab_title_control"));
        lab_title_control->setGeometry(QRect(40, 440, 1208, 45));
        lab_title_control->setStyleSheet(QString::fromUtf8("border-radius:5px;color:#FFFFFF;background:rgb(38,104,157);"));
        lab_bt_out = new QLabel(frame);
        lab_bt_out->setObjectName(QString::fromUtf8("lab_bt_out"));
        lab_bt_out->setGeometry(QRect(940, 620, 120, 30));
        sizePolicy.setHeightForWidth(lab_bt_out->sizePolicy().hasHeightForWidth());
        lab_bt_out->setSizePolicy(sizePolicy);
        lab_bt_out->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        Button_out = new QPushButton(frame);
        Button_out->setObjectName(QString::fromUtf8("Button_out"));
        Button_out->setGeometry(QRect(940, 500, 120, 120));
        sizePolicy.setHeightForWidth(Button_out->sizePolicy().hasHeightForWidth());
        Button_out->setSizePolicy(sizePolicy);
        Button_out->setStyleSheet(QString::fromUtf8("border-image: url(:/png/bt_out_def.jpg);"));
        Button_out->setCheckable(true);
        Button_out->setAutoExclusive(true);
        Button_out->setAutoDefault(false);
        Button_out->setDefault(true);
        lab_bt_stop = new QLabel(frame);
        lab_bt_stop->setObjectName(QString::fromUtf8("lab_bt_stop"));
        lab_bt_stop->setGeometry(QRect(1070, 620, 120, 30));
        sizePolicy.setHeightForWidth(lab_bt_stop->sizePolicy().hasHeightForWidth());
        lab_bt_stop->setSizePolicy(sizePolicy);
        lab_bt_stop->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        Button_stop = new QPushButton(frame);
        Button_stop->setObjectName(QString::fromUtf8("Button_stop"));
        Button_stop->setGeometry(QRect(1070, 500, 120, 120));
        sizePolicy.setHeightForWidth(Button_stop->sizePolicy().hasHeightForWidth());
        Button_stop->setSizePolicy(sizePolicy);
        Button_stop->setStyleSheet(QString::fromUtf8("border-image: url(:/png/start.jpg);"));
        Button_stop->setCheckable(true);
        Button_stop->setAutoExclusive(true);
        Button_stop->setAutoDefault(false);
        Button_stop->setDefault(true);
        lab_bt_change = new QLabel(frame);
        lab_bt_change->setObjectName(QString::fromUtf8("lab_bt_change"));
        lab_bt_change->setGeometry(QRect(200, 620, 240, 30));
        sizePolicy.setHeightForWidth(lab_bt_change->sizePolicy().hasHeightForWidth());
        lab_bt_change->setSizePolicy(sizePolicy);
        lab_bt_change->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        Button_change = new QPushButton(frame);
        Button_change->setObjectName(QString::fromUtf8("Button_change"));
        Button_change->setGeometry(QRect(210, 500, 240, 120));
        sizePolicy.setHeightForWidth(Button_change->sizePolicy().hasHeightForWidth());
        Button_change->setSizePolicy(sizePolicy);
        Button_change->setStyleSheet(QString::fromUtf8("border-image: url(:/png/bt_change_auto_chinese.png);"));
        Button_change->setCheckable(true);
        Button_change->setAutoExclusive(true);
        Button_change->setAutoDefault(false);
        Button_change->setDefault(true);
        lab_sys_title = new QLabel(frame);
        lab_sys_title->setObjectName(QString::fromUtf8("lab_sys_title"));
        lab_sys_title->setGeometry(QRect(45, 680, 550, 30));
        sizePolicy.setHeightForWidth(lab_sys_title->sizePolicy().hasHeightForWidth());
        lab_sys_title->setSizePolicy(sizePolicy);
        lab_sys_title->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_sys_txt = new QLabel(frame);
        lab_sys_txt->setObjectName(QString::fromUtf8("lab_sys_txt"));
        lab_sys_txt->setGeometry(QRect(45, 720, 550, 30));
        sizePolicy.setHeightForWidth(lab_sys_txt->sizePolicy().hasHeightForWidth());
        lab_sys_txt->setSizePolicy(sizePolicy);
        lab_sys_txt->setStyleSheet(QString::fromUtf8("color:#BBFFFF;"));
        Button_config = new QPushButton(frame);
        Button_config->setObjectName(QString::fromUtf8("Button_config"));
        Button_config->setGeometry(QRect(750, 666, 100, 100));
        sizePolicy.setHeightForWidth(Button_config->sizePolicy().hasHeightForWidth());
        Button_config->setSizePolicy(sizePolicy);
        Button_config->setStyleSheet(QString::fromUtf8("border-image: url(:/png/config_def.jpg);"));
        Button_config->setCheckable(true);
        Button_config->setAutoExclusive(true);
        Button_config->setAutoDefault(false);
        Button_config->setDefault(true);
        Button_language_change = new QPushButton(frame);
        Button_language_change->setObjectName(QString::fromUtf8("Button_language_change"));
        Button_language_change->setGeometry(QRect(987, 670, 140, 94));
        sizePolicy.setHeightForWidth(Button_language_change->sizePolicy().hasHeightForWidth());
        Button_language_change->setSizePolicy(sizePolicy);
        Button_language_change->setStyleSheet(QString::fromUtf8("border-image: url(:/png/l_chinese.jpg);"));
        Button_language_change->setCheckable(true);
        Button_language_change->setAutoExclusive(true);
        Button_language_change->setAutoDefault(false);
        Button_language_change->setDefault(true);
        lab_config = new QLabel(frame);
        lab_config->setObjectName(QString::fromUtf8("lab_config"));
        lab_config->setGeometry(QRect(839, 700, 141, 30));
        sizePolicy.setHeightForWidth(lab_config->sizePolicy().hasHeightForWidth());
        lab_config->setSizePolicy(sizePolicy);
        lab_config->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_title_man = new QLabel(frame);
        lab_title_man->setObjectName(QString::fromUtf8("lab_title_man"));
        lab_title_man->setGeometry(QRect(380, 30, 891, 81));
        sizePolicy.setHeightForWidth(lab_title_man->sizePolicy().hasHeightForWidth());
        lab_title_man->setSizePolicy(sizePolicy);
        lab_title_man->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_light1 = new QLabel(frame);
        lab_light1->setObjectName(QString::fromUtf8("lab_light1"));
        lab_light1->setGeometry(QRect(1040, 350, 70, 70));
        lab_light1->setStyleSheet(QString::fromUtf8("border-image: url(:/png/gct_ied_blank.png);"));
        lab_light2 = new QLabel(frame);
        lab_light2->setObjectName(QString::fromUtf8("lab_light2"));
        lab_light2->setGeometry(QRect(1040, 210, 70, 70));
        lab_light2->setStyleSheet(QString::fromUtf8("border-image: url(:/png/gct_ied_blank.png);"));
        lab_light3 = new QLabel(frame);
        lab_light3->setObjectName(QString::fromUtf8("lab_light3"));
        lab_light3->setGeometry(QRect(1040, 280, 70, 70));
        lab_light3->setStyleSheet(QString::fromUtf8("border-image: url(:/png/gct_ied_blank.png);"));
        lab_light1_txt = new QLabel(frame);
        lab_light1_txt->setObjectName(QString::fromUtf8("lab_light1_txt"));
        lab_light1_txt->setGeometry(QRect(1110, 365, 140, 50));
        lab_light1_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_light2_txt = new QLabel(frame);
        lab_light2_txt->setObjectName(QString::fromUtf8("lab_light2_txt"));
        lab_light2_txt->setGeometry(QRect(1110, 220, 140, 50));
        lab_light2_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_light3_txt = new QLabel(frame);
        lab_light3_txt->setObjectName(QString::fromUtf8("lab_light3_txt"));
        lab_light3_txt->setGeometry(QRect(1110, 290, 140, 50));
        lab_light3_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_posi_txt = new QLabel(frame);
        lab_posi_txt->setObjectName(QString::fromUtf8("lab_posi_txt"));
        lab_posi_txt->setGeometry(QRect(79, 210, 311, 210));
        lab_posi_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_posi_mm = new QLabel(frame);
        lab_posi_mm->setObjectName(QString::fromUtf8("lab_posi_mm"));
        lab_posi_mm->setGeometry(QRect(810, 210, 80, 210));
        lab_posi_mm->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lcdNum_posi = new QLCDNumber(frame);
        lcdNum_posi->setObjectName(QString::fromUtf8("lcdNum_posi"));
        lcdNum_posi->setGeometry(QRect(419, 210, 361, 210));
        lcdNum_posi->setLayoutDirection(Qt::LeftToRight);
        lcdNum_posi->setStyleSheet(QString::fromUtf8("border-image: url(:/png/lcd_back.png);"));
        lcdNum_posi->setFrameShape(QFrame::Box);
        lcdNum_posi->setSegmentStyle(QLCDNumber::Flat);
        lcdNum_posi->setProperty("value", QVariant(0));
        lcdNum_posi->setProperty("intValue", QVariant(0));
        Button_StarThread = new QPushButton(frame);
        Button_StarThread->setObjectName(QString::fromUtf8("Button_StarThread"));
        Button_StarThread->setGeometry(QRect(1110, 490, 111, 71));
        Button_StopThread = new QPushButton(frame);
        Button_StopThread->setObjectName(QString::fromUtf8("Button_StopThread"));
        Button_StopThread->setGeometry(QRect(1110, 580, 111, 71));
        lcdNum_test = new QLCDNumber(frame);
        lcdNum_test->setObjectName(QString::fromUtf8("lcdNum_test"));
        lcdNum_test->setGeometry(QRect(910, 250, 101, 71));
        Button_test = new QPushButton(frame);
        Button_test->setObjectName(QString::fromUtf8("Button_test"));
        Button_test->setGeometry(QRect(910, 350, 93, 28));
        lab_time = new QLabel(frame);
        lab_time->setObjectName(QString::fromUtf8("lab_time"));
        lab_time->setGeometry(QRect(1020, 115, 220, 30));
        sizePolicy.setHeightForWidth(lab_time->sizePolicy().hasHeightForWidth());
        lab_time->setSizePolicy(sizePolicy);
        lab_time->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        lab_bt_in->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\350\277\233\346\260\224</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_in->setText(QString());
        lab_title_state->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">\351\230\200\351\227\250\347\212\266\346\200\201</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_title_posi->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">\345\257\271 \344\270\255 \344\275\215 \347\275\256</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_title_control->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">\345\257\271\344\270\255\346\216\247\345\210\266</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_bt_out->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\207\272\346\260\224</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_out->setText(QString());
        lab_bt_stop->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\274\200\345\247\213</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_stop->setText(QString());
        lab_bt_change->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\211\213\345\212\250/\350\207\252\345\212\250</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_change->setText(QString());
        lab_sys_title->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\347\263\273\347\273\237\345\275\223\345\211\215\344\272\221\350\277\220\350\241\214\347\212\266\346\200\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_sys_txt->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\275\223\345\211\215\347\263\273\347\273\237\345\244\204\344\272\216\350\207\252\345\212\250\345\257\271\344\270\255\346\250\241\345\274\217</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_config->setText(QString());
        Button_language_change->setText(QString());
        lab_config->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\347\263\273\347\273\237\351\205\215\347\275\256</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_title_man->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">\346\214\257 \345\212\250 \345\217\260 \346\225\260 \345\255\227 \350\207\252 \345\212\250 \345\257\271 \344\270\255 \347\263\273 \347\273\237</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_light1->setText(QString());
        lab_light2->setText(QString());
        lab_light3->setText(QString());
        lab_light1_txt->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\225\205\351\232\234\347\201\257</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_light2_txt->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\350\277\233\346\260\224\351\230\200</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_light3_txt->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\207\272\346\260\224\351\230\200</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_posi_txt->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">\344\270\255\345\277\203\344\275\215\347\275\256\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_posi_mm->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt;\">mm</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_StarThread->setText(QApplication::translate("MainWindow", "ON_Thr", 0, QApplication::UnicodeUTF8));
        Button_StopThread->setText(QApplication::translate("MainWindow", "OFF_Thr", 0, QApplication::UnicodeUTF8));
        Button_test->setText(QApplication::translate("MainWindow", "test", 0, QApplication::UnicodeUTF8));
        lab_time->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">2021-07-19 14:10</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
