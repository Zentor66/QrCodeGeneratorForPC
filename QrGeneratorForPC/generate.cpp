#include "generate.h"
#include "qdebug.h"
#include <QrCodeGenerator.h>
#include <QString>
#include <QFile>

void Generate::set_pcname_n_series(const QString& pc_name, const QString& pc_series) {
    pcn = pc_name;
    pcs = pc_series;
}

bool Generate::gen_qr()
{
    QrCodeGenerator generator;
    QString data = "http://192.168.1.189:8000/?lt=" + pcn + pcs;
    qDebug() << data;
    QImage qrCodeImage = generator.generateQr(data);
    return qrCodeImage.save("Images/qr.png");
}

Generate::Generate() {}
