/********************************************************************************
** Form generated from reading UI file 'names_added.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMES_ADDED_H
#define UI_NAMES_ADDED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_names_added
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *names_added)
    {
        if (names_added->objectName().isEmpty())
            names_added->setObjectName("names_added");
        names_added->resize(791, 495);
        lineEdit = new QLineEdit(names_added);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(440, 160, 261, 31));
        pushButton = new QPushButton(names_added);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 400, 191, 51));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        lineEdit_2 = new QLineEdit(names_added);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(440, 270, 261, 31));
        label_2 = new QLabel(names_added);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 260, 261, 51));
        label_2->setFont(font);
        label = new QLabel(names_added);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 150, 171, 41));
        label->setFont(font);

        retranslateUi(names_added);

        QMetaObject::connectSlotsByName(names_added);
    } // setupUi

    void retranslateUi(QWidget *names_added)
    {
        names_added->setWindowTitle(QCoreApplication::translate("names_added", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("names_added", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("names_added", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\275\320\276\321\203\321\202\320\260:", nullptr));
        label->setText(QCoreApplication::translate("names_added", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\275\320\276\321\203\321\202\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class names_added: public Ui_names_added {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMES_ADDED_H
