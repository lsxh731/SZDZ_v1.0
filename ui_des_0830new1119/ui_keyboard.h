/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created: Thu Apr 28 00:34:32 2022
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_keyBoardDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_input;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pointBtn;
    QPushButton *pushButton_0;
    QPushButton *nagBtn;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QPushButton *clearBtn;

    void setupUi(QDialog *keyBoardDialog)
    {
        if (keyBoardDialog->objectName().isEmpty())
            keyBoardDialog->setObjectName(QString::fromUtf8("keyBoardDialog"));
        keyBoardDialog->resize(600, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8("keyboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        keyBoardDialog->setWindowIcon(icon);
        keyBoardDialog->setStyleSheet(QString::fromUtf8("#keyBoardDialog{\n"
"border-image: url(:/png/empty_background.jpg);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(keyBoardDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(keyBoardDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit_input = new QLineEdit(keyBoardDialog);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_input->sizePolicy().hasHeightForWidth());
        lineEdit_input->setSizePolicy(sizePolicy);
        lineEdit_input->setFont(font);

        horizontalLayout->addWidget(lineEdit_input);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_1 = new QPushButton(keyBoardDialog);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setFont(font);

        horizontalLayout_2->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(keyBoardDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(keyBoardDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font);

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_6 = new QPushButton(keyBoardDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font);

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(keyBoardDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font);

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(keyBoardDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font);

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_9 = new QPushButton(keyBoardDialog);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setFont(font);

        horizontalLayout_4->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(keyBoardDialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font);

        horizontalLayout_4->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(keyBoardDialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font);

        horizontalLayout_4->addWidget(pushButton_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pointBtn = new QPushButton(keyBoardDialog);
        pointBtn->setObjectName(QString::fromUtf8("pointBtn"));
        sizePolicy1.setHeightForWidth(pointBtn->sizePolicy().hasHeightForWidth());
        pointBtn->setSizePolicy(sizePolicy1);
        pointBtn->setFont(font);

        horizontalLayout_5->addWidget(pointBtn);

        pushButton_0 = new QPushButton(keyBoardDialog);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setFont(font);

        horizontalLayout_5->addWidget(pushButton_0);

        nagBtn = new QPushButton(keyBoardDialog);
        nagBtn->setObjectName(QString::fromUtf8("nagBtn"));
        sizePolicy1.setHeightForWidth(nagBtn->sizePolicy().hasHeightForWidth());
        nagBtn->setSizePolicy(sizePolicy1);
        nagBtn->setFont(font);

        horizontalLayout_5->addWidget(nagBtn);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        okBtn = new QPushButton(keyBoardDialog);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        sizePolicy1.setHeightForWidth(okBtn->sizePolicy().hasHeightForWidth());
        okBtn->setSizePolicy(sizePolicy1);
        okBtn->setFont(font);

        horizontalLayout_6->addWidget(okBtn);

        cancelBtn = new QPushButton(keyBoardDialog);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        sizePolicy1.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy1);
        cancelBtn->setFont(font);

        horizontalLayout_6->addWidget(cancelBtn);

        clearBtn = new QPushButton(keyBoardDialog);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));
        sizePolicy1.setHeightForWidth(clearBtn->sizePolicy().hasHeightForWidth());
        clearBtn->setSizePolicy(sizePolicy1);
        clearBtn->setFont(font);

        horizontalLayout_6->addWidget(clearBtn);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(keyBoardDialog);

        QMetaObject::connectSlotsByName(keyBoardDialog);
    } // setupUi

    void retranslateUi(QDialog *keyBoardDialog)
    {
        keyBoardDialog->setWindowTitle(QApplication::translate("keyBoardDialog", "\346\225\260\345\255\227\351\224\256\347\233\230", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("keyBoardDialog", "<html><head/><body><p align=\"center\">Value</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("keyBoardDialog", "1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("keyBoardDialog", "2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("keyBoardDialog", "3", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("keyBoardDialog", "4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("keyBoardDialog", "5", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("keyBoardDialog", "6", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("keyBoardDialog", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("keyBoardDialog", "8", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("keyBoardDialog", "9", 0, QApplication::UnicodeUTF8));
        pointBtn->setText(QApplication::translate("keyBoardDialog", ".", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("keyBoardDialog", "0", 0, QApplication::UnicodeUTF8));
        nagBtn->setText(QApplication::translate("keyBoardDialog", "-", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("keyBoardDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("keyBoardDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        clearBtn->setText(QApplication::translate("keyBoardDialog", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class keyBoardDialog: public Ui_keyBoardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
