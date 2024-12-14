#include "names_added.h"
#include "ui_names_added.h"
#include <QFile>
#include <QTextStream>

names_added::names_added(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::names_added)
{
    ui->setupUi(this);
}

names_added::~names_added()
{
    delete ui;
}

void names_added::on_pushButton_clicked()
{
    QString line_text1 = ui->lineEdit->text();
    QString line_text2 = ui -> lineEdit_2 -> text();
    if (!line_text1.isEmpty() && !line_text2.isEmpty()) {
        QFile file("C:/Users/0/OneDrive/Документы/QrGeneratorForPC/build/Qt_6_7_0_x64-Debug/pc_names_n_series.csv");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream stream(&file);
            stream << line_text1 << ";" << line_text2 << ";";
    }
    else{
        qDebug() << "Error!";
    }
    file.close();
    return;
}
}
