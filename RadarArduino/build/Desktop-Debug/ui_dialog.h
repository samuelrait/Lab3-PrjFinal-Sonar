/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *angle;
    QLabel *label_2;
    QLabel *range;
    QGraphicsView *graphicsView;
    QPushButton *button0;
    QPushButton *button90;
    QPushButton *button180;
    QSlider *verticalSlider;
    QPushButton *button45;
    QPushButton *button135;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1200, 540);
        Dialog->setMaximumSize(QSize(1200, 540));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 260, 111, 25));
        label->setMaximumSize(QSize(150, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        label->setFont(font);
        angle = new QLabel(Dialog);
        angle->setObjectName(QString::fromUtf8("angle"));
        angle->setGeometry(QRect(30, 320, 71, 45));
        angle->setMaximumSize(QSize(150, 45));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(36);
        angle->setFont(font1);
        angle->setAutoFillBackground(false);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 400, 121, 25));
        label_2->setMaximumSize(QSize(150, 25));
        label_2->setFont(font);
        range = new QLabel(Dialog);
        range->setObjectName(QString::fromUtf8("range"));
        range->setGeometry(QRect(30, 460, 111, 45));
        range->setMaximumSize(QSize(175, 45));
        range->setFont(font1);
        graphicsView = new QGraphicsView(Dialog);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(180, 10, 1000, 515));
        graphicsView->setMaximumSize(QSize(1000, 515));
        button0 = new QPushButton(Dialog);
        button0->setObjectName(QString::fromUtf8("button0"));
        button0->setGeometry(QRect(30, 20, 61, 32));
        button90 = new QPushButton(Dialog);
        button90->setObjectName(QString::fromUtf8("button90"));
        button90->setGeometry(QRect(30, 100, 61, 32));
        button180 = new QPushButton(Dialog);
        button180->setObjectName(QString::fromUtf8("button180"));
        button180->setGeometry(QRect(30, 180, 61, 32));
        verticalSlider = new QSlider(Dialog);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(110, 20, 41, 200));
        verticalSlider->setMaximumSize(QSize(100, 200));
        verticalSlider->setMaximum(180);
        verticalSlider->setOrientation(Qt::Vertical);
        button45 = new QPushButton(Dialog);
        button45->setObjectName(QString::fromUtf8("button45"));
        button45->setGeometry(QRect(30, 60, 61, 32));
        button135 = new QPushButton(Dialog);
        button135->setObjectName(QString::fromUtf8("button135"));
        button135->setGeometry(QRect(30, 140, 61, 32));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Radar", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Angulo", nullptr));
        angle->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Distancia", nullptr));
        range->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        button0->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        button90->setText(QCoreApplication::translate("Dialog", "90", nullptr));
        button180->setText(QCoreApplication::translate("Dialog", "180", nullptr));
        button45->setText(QCoreApplication::translate("Dialog", "45", nullptr));
        button135->setText(QCoreApplication::translate("Dialog", "135", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
