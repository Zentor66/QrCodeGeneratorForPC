#ifndef GENERATE_H
#define GENERATE_H
#include <QString>
#include <QMap>

class Generate
{
public:
    void set_pcname_n_series(const QString& pc_name, const QString& pc_series);
    bool gen_qr();
    Generate();

private:
    QString pcn;
    QString pcs;
};

#endif // GENERATE_H
