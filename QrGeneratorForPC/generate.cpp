#include "generate.h"
#include "qdebug.h"
#include <QrCodeGenerator.h>
#include <QString>
#include <QFile>
#include <QDir>

void Generate::setPCnameSeries(const QString& pc_name, const QString& pc_series) {
    this->pc_name = pc_name;
    this->pc_series = pc_series;
}

bool Generate::generateQR() {
    QrCodeGenerator generator;
    QString data = "http://192.168.1.189:8000/?lt=" + pc_name + pc_series;
    QImage qrCodeImage = generator.generateQr(data);
    qDebug() << qrCodeImage.size();
    qDebug() << QDir::currentPath();
    return qrCodeImage.save("Images/qr.png");
}

Generate::Generate() {}
