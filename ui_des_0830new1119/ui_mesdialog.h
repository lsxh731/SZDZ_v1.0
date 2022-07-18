/********************************************************************************
** Form generated from reading UI file 'mesdialog.ui'
**
** Created: Thu Apr 28 00:34:32 2022
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESDIALOG_H
#define UI_MESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mesdialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *label_ques;
    QPushButton *Button_cancel;
    QPushButton *Button_ok;
    QLabel *label_title;

    void setupUi(QWidget *Mesdialog)
    {
        if (Mesdialog->objectName().isEmpty())
            Mesdialog->setObjectName(QString::fromUtf8("Mesdialog"));
        Mesdialog->resize(600, 190);
        verticalLayout = new QVBoxLayout(Mesdialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Mesdialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_ques = new QLabel(frame);
        label_ques->setObjectName(QString::fromUtf8("label_ques"));
        label_ques->setGeometry(QRect(0, 40, 600, 70));
        Button_cancel = new QPushButton(frame);
        Button_cancel->setObjectName(QString::fromUtf8("Button_cancel"));
        Button_cancel->setGeometry(QRect(0, 110, 300, 80));
        Button_ok = new QPushButton(frame);
        Button_ok->setObjectName(QString::fromUtf8("Button_ok"));
        Button_ok->setGeometry(QRect(300, 110, 300, 80));
        label_title = new QLabel(frame);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(250, 0, 100, 40));

        verticalLayout->addWidget(frame);


        retranslateUi(Mesdialog);

        QMetaObject::connectSlotsByName(Mesdialog);
    } // setupUi

    void retranslateUi(QWidget *Mesdialog)
    {
        Mesdialog->setWindowTitle(QApplication::translate("Mesdialog", "Form", 0, QApplication::UnicodeUTF8));
        label_ques->setText(QApplication::translate("Mesdialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#008000;\">Loge xport succeeded!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_cancel->setText(QApplication::translate("Mesdialog", "CANCEL", 0, QApplication::UnicodeUTF8));
        Button_ok->setText(QApplication::translate("Mesdialog", "OK", 0, QApplication::UnicodeUTF8));
        label_title->setText(QApplication::translate("Mesdialog", "\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Mesdialog: public Ui_Mesdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESDIALOG_H
