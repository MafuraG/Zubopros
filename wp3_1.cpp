#include "wp3_1.h"
#include "ui_wp3_1.h"
#include <QDebug>
#include "pgglobalconstants.h"

Wp3_1::Wp3_1(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_1)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Qstring Wp3_1::Patient_Class = "К00 К01";

Wp3_1::~Wp3_1()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_1::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_1::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

bool Wp3_1::validatePage()
{
    qDebug()<<"Valid called in wp3_1";
    return true;
}

int Wp3_1::nextId() const
{
    qDebug()<<"going to next page";
    return PgGlobalConstants::WP_3_2;
}


void Wp3_1::on_checkBox_16_clicked(bool checked)
{
    //Пятна белого цвета
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_1);
    QString symthom_text = ui->checkBox_16->text();
    if (checked){
       pdata->symptomList().append(symthom_text);
    }else{
       pdata->symptomList().removeAll(symthom_text);
    }

}

void Wp3_1::on_checkBox_17_clicked(bool checked)
{
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_1);
    QString symthom_text = ui->checkBox_17->text();
    if (checked){
       pdata->symptomList().append(symthom_text);
    }else{
       pdata->symptomList().removeAll(symthom_text);
    }
}

void Wp3_1::on_checkBox_18_clicked(bool checked)
{
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_1);
    QString symthom_text = ui->checkBox_18->text();
    if (checked){
       pdata->symptomList().append(symthom_text);
    }else{
       pdata->symptomList().removeAll(symthom_text);
    }
}

void Wp3_1::on_checkBox_19_clicked(bool checked)
{
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_1);
    QString symthom_text = ui->checkBox_19->text();
    if (checked){
       pdata->symptomList().append(symthom_text);
    }else{
       pdata->symptomList().removeAll(symthom_text);
    }
}

void Wp3_1::on_checkBox_20_clicked(bool checked)
{
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_1);
    QString symthom_text = ui->checkBox_20->text();
    if (checked){
       pdata->symptomList().append(symthom_text);
    }else{
       pdata->symptomList().removeAll(symthom_text);
    }
}

void Wp3_1::on_checkBox_21_clicked(bool checked)
{
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_1);

    if (checked){
        pdata->setFurtherInvestigation(true);
    }else{
        pdata->setFurtherInvestigation(false);
    }
}

void Wp3_1::on_radioButton_7_clicked(bool checked)
{
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_1);
    QString symthom_text = ui->checkBox_20->text();
    if (checked){
        pdata->setSymptoms(true);
    }else{
        pdata->setSymptoms(false);
    }
}
