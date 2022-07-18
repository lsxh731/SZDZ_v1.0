/********************************************************************************
** Form generated from reading UI file 'config_widget.ui'
**
** Created: Thu Apr 28 00:34:32 2022
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_WIDGET_H
#define UI_CONFIG_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>
#include <mylinedit.h>

QT_BEGIN_NAMESPACE

class Ui_config_widget
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *Button_Home;
    QLabel *lab_title_man;
    QLabel *lab_home;
    QLabel *lab_absp_txt;
    QLabel *lab_absp_mm;
    QLCDNumber *lcdNum_absp;
    QLabel *lab_pres_mm;
    QLabel *lab_pres_txt;
    QLCDNumber *lcdNum_pres;
    QLabel *lab_title_config;
    QLabel *lab_preposi_mm;
    QLabel *lab_preposi_txt;
    mylinedit *lineEdit_preposi;
    QLabel *lab_freq_hz;
    QLabel *lab_freq_txt;
    mylinedit *lineEdit_freq;
    QLabel *lab_brightness_percent;
    QLabel *lab_brightness_txt;
    QLCDNumber *lcdNum_brightness;
    QSlider *HlSlider_brightness;
    QPushButton *Button_logSave;
    QLabel *lab_logSave;
    QLabel *lab_title_posi;

    void setupUi(QWidget *config_widget)
    {
        if (config_widget->objectName().isEmpty())
            config_widget->setObjectName(QString::fromUtf8("config_widget"));
        config_widget->resize(1280, 800);
        config_widget->setStyleSheet(QString::fromUtf8("#config_widget{\n"
"border-image: url(:/png/config_uinew.jpg);\n"
"}"));
        gridLayout = new QGridLayout(config_widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(config_widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Button_Home = new QPushButton(frame);
        Button_Home->setObjectName(QString::fromUtf8("Button_Home"));
        Button_Home->setGeometry(QRect(520, 660, 110, 110));
        Button_Home->setStyleSheet(QString::fromUtf8("border-image: url(:/png/homedefault.png);"));
        lab_title_man = new QLabel(frame);
        lab_title_man->setObjectName(QString::fromUtf8("lab_title_man"));
        lab_title_man->setGeometry(QRect(380, 30, 891, 81));
        lab_title_man->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_home = new QLabel(frame);
        lab_home->setObjectName(QString::fromUtf8("lab_home"));
        lab_home->setGeometry(QRect(615, 700, 120, 30));
        lab_home->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_absp_txt = new QLabel(frame);
        lab_absp_txt->setObjectName(QString::fromUtf8("lab_absp_txt"));
        lab_absp_txt->setGeometry(QRect(39, 210, 201, 140));
        lab_absp_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_absp_mm = new QLabel(frame);
        lab_absp_mm->setObjectName(QString::fromUtf8("lab_absp_mm"));
        lab_absp_mm->setGeometry(QRect(440, 210, 72, 140));
        lab_absp_mm->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lcdNum_absp = new QLCDNumber(frame);
        lcdNum_absp->setObjectName(QString::fromUtf8("lcdNum_absp"));
        lcdNum_absp->setGeometry(QRect(260, 210, 150, 140));
        lcdNum_absp->setStyleSheet(QString::fromUtf8("border-image: url(:/png/lcd_back.png);"));
        lab_pres_mm = new QLabel(frame);
        lab_pres_mm->setObjectName(QString::fromUtf8("lab_pres_mm"));
        lab_pres_mm->setGeometry(QRect(1070, 210, 72, 140));
        lab_pres_mm->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_pres_txt = new QLabel(frame);
        lab_pres_txt->setObjectName(QString::fromUtf8("lab_pres_txt"));
        lab_pres_txt->setGeometry(QRect(669, 210, 201, 140));
        lab_pres_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lcdNum_pres = new QLCDNumber(frame);
        lcdNum_pres->setObjectName(QString::fromUtf8("lcdNum_pres"));
        lcdNum_pres->setGeometry(QRect(890, 210, 150, 140));
        lcdNum_pres->setStyleSheet(QString::fromUtf8("border-image: url(:/png/lcd_back.png);"));
        lab_title_config = new QLabel(frame);
        lab_title_config->setObjectName(QString::fromUtf8("lab_title_config"));
        lab_title_config->setGeometry(QRect(40, 368, 1211, 45));
        lab_title_config->setStyleSheet(QString::fromUtf8("border-radius:5px;color:#FFFFFF;background:rgb(38,104,157);"));
        lab_preposi_mm = new QLabel(frame);
        lab_preposi_mm->setObjectName(QString::fromUtf8("lab_preposi_mm"));
        lab_preposi_mm->setGeometry(QRect(440, 431, 72, 100));
        lab_preposi_mm->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_preposi_txt = new QLabel(frame);
        lab_preposi_txt->setObjectName(QString::fromUtf8("lab_preposi_txt"));
        lab_preposi_txt->setGeometry(QRect(39, 431, 201, 100));
        lab_preposi_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lineEdit_preposi = new mylinedit(frame);
        lineEdit_preposi->setObjectName(QString::fromUtf8("lineEdit_preposi"));
        lineEdit_preposi->setGeometry(QRect(260, 431, 150, 100));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_preposi->sizePolicy().hasHeightForWidth());
        lineEdit_preposi->setSizePolicy(sizePolicy);
        lab_freq_hz = new QLabel(frame);
        lab_freq_hz->setObjectName(QString::fromUtf8("lab_freq_hz"));
        lab_freq_hz->setGeometry(QRect(440, 547, 72, 100));
        lab_freq_hz->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_freq_txt = new QLabel(frame);
        lab_freq_txt->setObjectName(QString::fromUtf8("lab_freq_txt"));
        lab_freq_txt->setGeometry(QRect(39, 547, 201, 100));
        lab_freq_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lineEdit_freq = new mylinedit(frame);
        lineEdit_freq->setObjectName(QString::fromUtf8("lineEdit_freq"));
        lineEdit_freq->setGeometry(QRect(260, 547, 150, 100));
        sizePolicy.setHeightForWidth(lineEdit_freq->sizePolicy().hasHeightForWidth());
        lineEdit_freq->setSizePolicy(sizePolicy);
        lab_brightness_percent = new QLabel(frame);
        lab_brightness_percent->setObjectName(QString::fromUtf8("lab_brightness_percent"));
        lab_brightness_percent->setGeometry(QRect(1070, 431, 72, 100));
        lab_brightness_percent->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_brightness_txt = new QLabel(frame);
        lab_brightness_txt->setObjectName(QString::fromUtf8("lab_brightness_txt"));
        lab_brightness_txt->setGeometry(QRect(669, 431, 201, 100));
        lab_brightness_txt->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lcdNum_brightness = new QLCDNumber(frame);
        lcdNum_brightness->setObjectName(QString::fromUtf8("lcdNum_brightness"));
        lcdNum_brightness->setGeometry(QRect(890, 431, 150, 100));
        lcdNum_brightness->setStyleSheet(QString::fromUtf8("border-image: url(:/png/lcd_back.png);"));
        HlSlider_brightness = new QSlider(frame);
        HlSlider_brightness->setObjectName(QString::fromUtf8("HlSlider_brightness"));
        HlSlider_brightness->setGeometry(QRect(660, 520, 561, 141));
        HlSlider_brightness->setStyleSheet(QString::fromUtf8(""));
        HlSlider_brightness->setOrientation(Qt::Horizontal);
        Button_logSave = new QPushButton(frame);
        Button_logSave->setObjectName(QString::fromUtf8("Button_logSave"));
        Button_logSave->setGeometry(QRect(90, 671, 90, 90));
        Button_logSave->setStyleSheet(QString::fromUtf8("border-image: url(:/png/log_def.png);"));
        lab_logSave = new QLabel(frame);
        lab_logSave->setObjectName(QString::fromUtf8("lab_logSave"));
        lab_logSave->setGeometry(QRect(180, 700, 191, 30));
        lab_logSave->setStyleSheet(QString::fromUtf8("color:#FFFFFF;"));
        lab_title_posi = new QLabel(frame);
        lab_title_posi->setObjectName(QString::fromUtf8("lab_title_posi"));
        lab_title_posi->setGeometry(QRect(40, 150, 1211, 45));
        lab_title_posi->setStyleSheet(QString::fromUtf8("border-radius:5px;color:#FFFFFF;background:rgb(38,104,157);"));

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(config_widget);

        QMetaObject::connectSlotsByName(config_widget);
    } // setupUi

    void retranslateUi(QWidget *config_widget)
    {
        config_widget->setWindowTitle(QApplication::translate("config_widget", "Form", 0, QApplication::UnicodeUTF8));
        Button_Home->setText(QString());
        lab_title_man->setText(QApplication::translate("config_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">\346\214\257 \345\212\250 \345\217\260 \346\225\260 \345\255\227 \350\207\252 \345\212\250 \345\257\271 \344\270\255 \347\263\273 \347\273\237</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_home->setText(QApplication::translate("config_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">\344\270\273\347\225\214\351\235\242</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_absp_txt->setText(QApplication::translate("config_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\275\223\345\211\215\344\275\215\347\275\256</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_absp_mm->setText(QApplication::translate("config_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">mm</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_pres_mm->setText(QApplication::translate("config_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">KPa</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_pres_txt->setText(QApplication::translate("config_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\260\224\345\216\213\345\200\274</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_title_config->setText(QApplication::translate("config_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">\345\217\202\346\225\260\350\256\276\347\275\256</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_preposi_mm->setText(QApplication::translate("config_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">mm</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_preposi_txt->setText(QApplication::translate("config_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\351\242\204\350\256\276\344\275\215\347\275\256</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_freq_hz->setText(QApplication::translate("config_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">Hz</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_freq_txt->setText(QApplication::translate("config_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\216\247\345\210\266\351\242\221\347\216\207</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_brightness_percent->setText(QApplication::translate("config_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">%</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_brightness_txt->setText(QApplication::translate("config_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\351\242\221\345\271\225\344\272\256\345\272\246</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_logSave->setText(QString());
        lab_logSave->setText(QApplication::translate("config_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\257\274\345\207\272\346\227\245\345\277\227</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_title_posi->setText(QApplication::translate("config_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">\345\275\223\345\211\215\347\212\266\346\200\201</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class config_widget: public Ui_config_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_WIDGET_H
