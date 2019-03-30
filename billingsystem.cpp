#include "billingsystem.h"
#include "ui_cbillingsystem.h"

CBillingSystem::CBillingSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CBillingSystem)
{
    ui->setupUi(this);
}

CBillingSystem::~CBillingSystem()
{
    delete ui;
}

void CBillingSystem::on_calc_data_clicked()
{
    // 获取输入的数据
    int curTotalElect = qstring2float(ui->cur_Total_electri->text());
    int preTotalElect = qstring2float(ui->pre_Total_electri->text());
    int nextdoor_curTotalEle = qstring2float( ui->nextDoor_cur_Total_elect->text());
    int nextdoor_preTotalEle = qstring2float( ui->nextdoor_pre_total_elect->text());
    int me_curTotalEle = qstring2float( ui->me_cur_total_elect->text());
    int me_preTotalEle = qstring2float( ui->me_pre_total_elect->text());
    int allMoney =qstring2float( ui->all_money->text());

    //计算用电量
    int totalEle = curTotalElect - preTotalElect;
    int nextdoorUsedEle = nextdoor_curTotalEle - nextdoor_preTotalEle;
    int meUsedEle = me_curTotalEle - me_preTotalEle;
    int corridorEle = totalEle - nextdoorUsedEle - meUsedEle;

    //计算电费
//    printf("sss %d %d %d %d\n", totalEle, nextdoorUsedEle, meUsedEle, corridorEle);
    double nextdoorMoney = double(allMoney) * (double(nextdoorUsedEle) / double(totalEle));
    double meMoney = double(allMoney) * (double(meUsedEle) / double(totalEle));
    double corridorMoney = double(allMoney) * (double(corridorEle) / double(totalEle));

//    QDebug::qDebug() << nextdoorMoney << " " << meMoney << " " << corridorMoney;
    printf("ddddd: %f\n", nextdoorMoney);
    // 数据显示在GUI
    ui->total_electri->setText(QString::number(totalEle));
    ui->nextdoor_total_elect->setText(QString::number(nextdoorUsedEle));
    ui->me_total_elect->setText(QString::number(meUsedEle));
    ui->corridor_total_elect->setText(QString::number(corridorEle));

    ui->nextdoor_money->setText(float2qstring(nextdoorMoney));
    ui->me_money->setText(float2qstring(meMoney));
    ui->corridor_money->setText(float2qstring(corridorMoney));
}

int CBillingSystem::qstring2float(const QString &str)
{
    return str.toInt();
}

QString CBillingSystem::float2qstring(const double num)
{
    QString data =  QString("%1").arg(num);
    return data;
}

