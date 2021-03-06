/********************************************************************************
** Form generated from reading UI file 'systemsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSETTINGS_H
#define UI_SYSTEMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SystemSettings
{
public:
    QPushButton *btnSaveOnce;
    QPushButton *btnClose;
    QGroupBox *groupBox;
    QLineEdit *led_Max_Vel;
    QLabel *lab_ctrl_interval_3;
    QLabel *label_5;
    QLineEdit *led_Max_Acc;
    QLabel *lab_ctrl_interval_4;
    QLabel *label_6;
    QLabel *lab_draw_interval_3;
    QLineEdit *lineEdit_MaxOutU_Debug;
    QLabel *label_7;
    QLabel *lab_ctrl_interval_5;
    QLineEdit *led_Max_force;
    QLabel *label_8;
    QLineEdit *led_Max_Weight;
    QLabel *lab_ctrl_interval_10;
    QLabel *label_15;
    QLineEdit *lineEdit_MaxOutU;
    QLabel *label_4;
    QLineEdit *lineEdit_MaxAbsolutePosition;
    QLabel *lab_ctrl_interval_2;
    QLabel *label_3;
    QLabel *lab_draw_interval_2;
    QGroupBox *groupBox_2;
    QSlider *horizontalSlider_control;
    QSlider *horizontalSlider_draw;
    QLabel *lab_ctrl_interval;
    QLabel *label;
    QSpinBox *spinBoxCtrlInterval;
    QLabel *lab_draw_interval;
    QSpinBox *spinBoxDrawInterval;
    QLabel *label_2;

    void setupUi(QDialog *SystemSettings)
    {
        if (SystemSettings->objectName().isEmpty())
            SystemSettings->setObjectName(QStringLiteral("SystemSettings"));
        SystemSettings->resize(730, 475);
        btnSaveOnce = new QPushButton(SystemSettings);
        btnSaveOnce->setObjectName(QStringLiteral("btnSaveOnce"));
        btnSaveOnce->setGeometry(QRect(140, 380, 121, 41));
        btnSaveOnce->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color:rgb(230, 240, 250);\n"
"    border-radius: 10px;\n"
"    border: 2px groove gray;\n"
"    border-style: outset;\n"
"\n"
"    font:bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background-color:white;\n"
"    color: black;\n"
"    }\n"
"QPushButton:pressed{\n"
"    background-color:rgb(85, 170, 255);\n"
"    border-style: inset;\n"
"    }"));
        btnClose = new QPushButton(SystemSettings);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(410, 380, 141, 41));
        btnClose->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color:rgb(230, 240, 250);\n"
"    border-radius: 10px;\n"
"    border: 2px groove gray;\n"
"    border-style: outset;\n"
"\n"
"    font:bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background-color:white;\n"
"    color: black;\n"
"    }\n"
"QPushButton:pressed{\n"
"    background-color:rgb(85, 170, 255);\n"
"    border-style: inset;\n"
"    }"));
        groupBox = new QGroupBox(SystemSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(370, 0, 331, 331));
        led_Max_Vel = new QLineEdit(groupBox);
        led_Max_Vel->setObjectName(QStringLiteral("led_Max_Vel"));
        led_Max_Vel->setGeometry(QRect(159, 190, 105, 20));
        lab_ctrl_interval_3 = new QLabel(groupBox);
        lab_ctrl_interval_3->setObjectName(QStringLiteral("lab_ctrl_interval_3"));
        lab_ctrl_interval_3->setGeometry(QRect(13, 190, 140, 20));
        QFont font;
        font.setPointSize(15);
        lab_ctrl_interval_3->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 190, 51, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setWeight(50);
        label_5->setFont(font1);
        led_Max_Acc = new QLineEdit(groupBox);
        led_Max_Acc->setObjectName(QStringLiteral("led_Max_Acc"));
        led_Max_Acc->setGeometry(QRect(159, 140, 105, 20));
        lab_ctrl_interval_4 = new QLabel(groupBox);
        lab_ctrl_interval_4->setObjectName(QStringLiteral("lab_ctrl_interval_4"));
        lab_ctrl_interval_4->setGeometry(QRect(13, 140, 140, 20));
        lab_ctrl_interval_4->setFont(font);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 140, 20, 20));
        label_6->setFont(font1);
        lab_draw_interval_3 = new QLabel(groupBox);
        lab_draw_interval_3->setObjectName(QStringLiteral("lab_draw_interval_3"));
        lab_draw_interval_3->setGeometry(QRect(13, 30, 140, 23));
        lab_draw_interval_3->setFont(font);
        lineEdit_MaxOutU_Debug = new QLineEdit(groupBox);
        lineEdit_MaxOutU_Debug->setObjectName(QStringLiteral("lineEdit_MaxOutU_Debug"));
        lineEdit_MaxOutU_Debug->setGeometry(QRect(159, 31, 105, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 30, 16, 20));
        label_7->setFont(font1);
        lab_ctrl_interval_5 = new QLabel(groupBox);
        lab_ctrl_interval_5->setObjectName(QStringLiteral("lab_ctrl_interval_5"));
        lab_ctrl_interval_5->setGeometry(QRect(14, 100, 140, 20));
        lab_ctrl_interval_5->setFont(font);
        led_Max_force = new QLineEdit(groupBox);
        led_Max_force->setObjectName(QStringLiteral("led_Max_force"));
        led_Max_force->setGeometry(QRect(160, 100, 105, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(270, 100, 20, 20));
        label_8->setFont(font1);
        led_Max_Weight = new QLineEdit(groupBox);
        led_Max_Weight->setObjectName(QStringLiteral("led_Max_Weight"));
        led_Max_Weight->setGeometry(QRect(159, 280, 105, 20));
        lab_ctrl_interval_10 = new QLabel(groupBox);
        lab_ctrl_interval_10->setObjectName(QStringLiteral("lab_ctrl_interval_10"));
        lab_ctrl_interval_10->setGeometry(QRect(13, 280, 140, 20));
        lab_ctrl_interval_10->setFont(font);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(270, 280, 20, 20));
        label_15->setFont(font1);
        lineEdit_MaxOutU = new QLineEdit(groupBox);
        lineEdit_MaxOutU->setObjectName(QStringLiteral("lineEdit_MaxOutU"));
        lineEdit_MaxOutU->setGeometry(QRect(157, 68, 105, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(268, 67, 16, 20));
        label_4->setFont(font1);
        lineEdit_MaxAbsolutePosition = new QLineEdit(groupBox);
        lineEdit_MaxAbsolutePosition->setObjectName(QStringLiteral("lineEdit_MaxAbsolutePosition"));
        lineEdit_MaxAbsolutePosition->setGeometry(QRect(159, 240, 105, 20));
        lab_ctrl_interval_2 = new QLabel(groupBox);
        lab_ctrl_interval_2->setObjectName(QStringLiteral("lab_ctrl_interval_2"));
        lab_ctrl_interval_2->setGeometry(QRect(13, 240, 140, 20));
        lab_ctrl_interval_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 240, 20, 20));
        label_3->setFont(font1);
        lab_draw_interval_2 = new QLabel(groupBox);
        lab_draw_interval_2->setObjectName(QStringLiteral("lab_draw_interval_2"));
        lab_draw_interval_2->setGeometry(QRect(11, 67, 140, 23));
        lab_draw_interval_2->setFont(font);
        groupBox_2 = new QGroupBox(SystemSettings);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 0, 351, 331));
        horizontalSlider_control = new QSlider(groupBox_2);
        horizontalSlider_control->setObjectName(QStringLiteral("horizontalSlider_control"));
        horizontalSlider_control->setGeometry(QRect(50, 70, 160, 22));
        horizontalSlider_control->setOrientation(Qt::Horizontal);
        horizontalSlider_draw = new QSlider(groupBox_2);
        horizontalSlider_draw->setObjectName(QStringLiteral("horizontalSlider_draw"));
        horizontalSlider_draw->setGeometry(QRect(50, 170, 160, 22));
        horizontalSlider_draw->setOrientation(Qt::Horizontal);
        lab_ctrl_interval = new QLabel(groupBox_2);
        lab_ctrl_interval->setObjectName(QStringLiteral("lab_ctrl_interval"));
        lab_ctrl_interval->setGeometry(QRect(20, 30, 100, 20));
        lab_ctrl_interval->setFont(font);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 70, 20, 20));
        label->setFont(font1);
        spinBoxCtrlInterval = new QSpinBox(groupBox_2);
        spinBoxCtrlInterval->setObjectName(QStringLiteral("spinBoxCtrlInterval"));
        spinBoxCtrlInterval->setGeometry(QRect(230, 70, 61, 20));
        lab_draw_interval = new QLabel(groupBox_2);
        lab_draw_interval->setObjectName(QStringLiteral("lab_draw_interval"));
        lab_draw_interval->setGeometry(QRect(20, 120, 100, 23));
        lab_draw_interval->setFont(font);
        spinBoxDrawInterval = new QSpinBox(groupBox_2);
        spinBoxDrawInterval->setObjectName(QStringLiteral("spinBoxDrawInterval"));
        spinBoxDrawInterval->setGeometry(QRect(230, 170, 61, 20));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 170, 20, 20));
        label_2->setFont(font1);

        retranslateUi(SystemSettings);

        QMetaObject::connectSlotsByName(SystemSettings);
    } // setupUi

    void retranslateUi(QDialog *SystemSettings)
    {
        SystemSettings->setWindowTitle(QApplication::translate("SystemSettings", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        btnSaveOnce->setText(QApplication::translate("SystemSettings", "\347\241\256\345\256\232", 0));
        btnClose->setText(QApplication::translate("SystemSettings", "\351\200\200\345\207\272", 0));
        groupBox->setTitle(QApplication::translate("SystemSettings", "\344\277\235\346\212\244\345\217\202\346\225\260", 0));
        led_Max_Vel->setText(QString());
        lab_ctrl_interval_3->setText(QApplication::translate("SystemSettings", "\346\234\200\345\244\247\351\200\237\345\272\246\357\274\232", 0));
        label_5->setText(QApplication::translate("SystemSettings", "MM/s", 0));
        led_Max_Acc->setText(QString());
        lab_ctrl_interval_4->setText(QApplication::translate("SystemSettings", "\346\234\200\345\244\247\345\212\240\351\200\237\345\272\246\357\274\232", 0));
        label_6->setText(QApplication::translate("SystemSettings", "g", 0));
        lab_draw_interval_3->setText(QApplication::translate("SystemSettings", "<html><head/><body><p>Debug\350\276\223\345\207\272\351\231\220\345\271\205\357\274\232</p></body></html>", 0));
        lineEdit_MaxOutU_Debug->setText(QString());
        label_7->setText(QApplication::translate("SystemSettings", "V", 0));
        lab_ctrl_interval_5->setText(QApplication::translate("SystemSettings", "\346\234\200\345\244\247\346\216\250\345\212\233\357\274\232", 0));
        led_Max_force->setText(QString());
        label_8->setText(QApplication::translate("SystemSettings", "N", 0));
        led_Max_Weight->setText(QString());
        lab_ctrl_interval_10->setText(QApplication::translate("SystemSettings", "\350\257\225\344\273\266\350\264\250\351\207\217\357\274\232", 0));
        label_15->setText(QApplication::translate("SystemSettings", "Kg", 0));
        lineEdit_MaxOutU->setText(QString());
        label_4->setText(QApplication::translate("SystemSettings", "V", 0));
        lineEdit_MaxAbsolutePosition->setText(QString());
        lab_ctrl_interval_2->setText(QApplication::translate("SystemSettings", "\346\234\200\345\244\247\344\275\215\347\247\273\357\274\232", 0));
        label_3->setText(QApplication::translate("SystemSettings", "MM", 0));
        lab_draw_interval_2->setText(QApplication::translate("SystemSettings", "<html><head/><body><p>\350\276\223\345\207\272\347\273\235\345\257\271\351\231\220\345\271\205\357\274\232</p></body></html>", 0));
        groupBox_2->setTitle(QApplication::translate("SystemSettings", "\345\221\250\346\234\237\345\217\202\346\225\260", 0));
        lab_ctrl_interval->setText(QApplication::translate("SystemSettings", "\346\216\247\345\210\266\345\221\250\346\234\237\357\274\232", 0));
        label->setText(QApplication::translate("SystemSettings", "MS", 0));
        lab_draw_interval->setText(QApplication::translate("SystemSettings", "<html><head/><body><p>\347\273\230\345\233\276\345\221\250\346\234\237\357\274\232</p></body></html>", 0));
        label_2->setText(QApplication::translate("SystemSettings", "MS", 0));
    } // retranslateUi

};

namespace Ui {
    class SystemSettings: public Ui_SystemSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSETTINGS_H
