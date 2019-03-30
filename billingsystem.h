#ifndef BILLINGSYSTEM_H
#define BILLINGSYSTEM_H

#include <QWidget>

namespace Ui {
class CBillingSystem;
}

class CBillingSystem : public QWidget
{
    Q_OBJECT

public:
    explicit CBillingSystem(QWidget *parent = nullptr);
    ~CBillingSystem();

private slots:
    void on_calc_data_clicked();

private:
    int qstring2float(const QString& str);
    QString float2qstring(const double num);

private:
    Ui::CBillingSystem *ui;
};

#endif // BILLINGSYSTEM_H
