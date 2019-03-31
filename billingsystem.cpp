#include "billingsystem.h"
#include "ui_cbillingsystem.h"
#include <QFile>
#include <QtCore/QJsonParseError>
#include <QDebug>
#include <json/reader.h>
#include <json/writer.h>
#include <iostream>

CBillingSystem::CBillingSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CBillingSystem),m_config("")
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    initConfig();
    setPageConfig();
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
    double nextdoorMoney = double(allMoney) * (double(nextdoorUsedEle) / double(totalEle));
    double meMoney = double(allMoney) * (double(meUsedEle) / double(totalEle));
    double corridorMoney = double(allMoney) * (double(corridorEle) / double(totalEle));

    // 数据显示在GUI
    ui->total_electri->setText(QString::number(totalEle));
    ui->nextdoor_total_elect->setText(QString::number(nextdoorUsedEle));
    ui->me_total_elect->setText(QString::number(meUsedEle));
    ui->corridor_total_elect->setText(QString::number(corridorEle));

    ui->nextdoor_money->setText(float2qstring(nextdoorMoney));
    ui->me_money->setText(float2qstring(meMoney));
    ui->corridor_money->setText(float2qstring(corridorMoney));

    //保存页面信息
    getPageConfig();
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

void CBillingSystem::initConfig()
{
    QString path = "/home/allen/code/qt/billingSys/config.json";
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    QByteArray data = file.readAll();

    Json::Reader r;
    r.parse(data.data(), m_config, false);
    std::cout << m_config.toStyledString() << std::endl;
}

void CBillingSystem::setPageConfig()
{
    ui->cur_Total_electri->setText(QString(m_config["curTotalEle"].asCString()));
    ui->pre_Total_electri->setText(QString(m_config["preTotalEle"].asCString()));
    ui->nextDoor_cur_Total_elect->setText(QString(m_config["nextDoorCurTotalEle"].asCString()));
    ui->nextdoor_pre_total_elect->setText(QString(m_config["nextDoorPreTotalEle"].asCString()));
    ui->me_cur_total_elect->setText(QString(m_config["meCurTotalEle"].asCString()));
    ui->me_pre_total_elect->setText(QString(m_config["mePreTotalEle"].asCString()));
}

void CBillingSystem::getPageConfig()
{
    m_config["curTotalEle"] = ui->cur_Total_electri->text().toStdString();
    m_config["preTotalEle"] = ui->pre_Total_electri->text().toStdString();
    m_config["nextDoorCurTotalEle"] = ui->nextDoor_cur_Total_elect->text().toStdString();
    m_config["nextDoorPreTotalEle"] = ui->nextdoor_pre_total_elect->text().toStdString();
    m_config["meCurTotalEle"] = ui->me_cur_total_elect->text().toStdString();
    m_config["mePreTotalEle"] = ui->me_pre_total_elect->text().toStdString();

    //保持文件
    Json::FastWriter writer;
    std::string config = writer.write(m_config);
    QString path = "/home/allen/code/qt/billingSys/config.json";
    QFile file(path);
    file.open(QIODevice::ReadWrite);
    file.write(config.c_str());
}

