#include "generate.h"
#include "qdebug.h"
#include <QrCodeGenerator.h>
#include "names_added.cpp"
#include <QString>
#include <QFile>
using namespace std;

void Generate::set_pcname_n_series(const QString& pc_name, const QString& pc_series) {
    QString pcn = pc_name;
    QString pcs = pc_series;
}

bool Generate::gen_qr()
{
    QFile file("pc_names_n_series.txt");
    string pc_name = file.readLine().toStdString();
    string pc_series = file.readLine().toStdString();
    QrCodeGenerator generator;
    QString pcn = QString::fromStdString(pc_name);
    QString pcs = QString::fromStdString(pc_series);
    QString data = "http://192.168.1.189:8000/?lt=" + pcn + pcs;
    QImage qrCodeImage = generator.generateQr(data);
    return qrCodeImage.save("Images/qr.png");
}

Generate::Generate() {}
