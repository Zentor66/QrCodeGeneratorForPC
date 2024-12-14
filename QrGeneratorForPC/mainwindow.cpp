#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "names_added.h"
#include <QImage>
#include <QObject>
#include <QString>
#include <QFile>
#include <generate.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file("C:/Users/0/OneDrive/Документы/QrGeneratorForPC/build/Qt_6_7_0_x64-Debug/pc_names_n_series.csv");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    qDebug() << file.isOpen();
    while (!file.atEnd()) {
        auto spisok = stream.readLine().split(";");
        qDebug() << spisok.size();
        map[spisok[0]] = spisok[1];
    }
    file.close();
    QStringList keys = map.keys();
    ui->comboBox->addItems(keys);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_generation_clicked()
{
    const QString& pc_name = ui->comboBox->currentText();
    const QString& pc_series = map[ui->comboBox->currentText()];
    Generate QR;
    QR.set_pcname_n_series(pc_name, pc_series);
    qDebug() << QR.gen_qr();
}

void MainWindow::on_pushButton_clicked()
{
    names_added na;
    na.exec();
}
