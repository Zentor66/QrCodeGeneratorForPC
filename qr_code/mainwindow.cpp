#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    QFile file("pc_names_n_series.csv");
    QMap<QString, QString> map;
    QTextStream stream(&file);
    while (!file.atEnd()) {
        auto spisok = stream.readLine().split(";");
        map[spisok[0]] = spisok[1];
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_generation_clicked()
{
    Generate QR;
    qDebug() << QR.gen_qr();
    return;
}
