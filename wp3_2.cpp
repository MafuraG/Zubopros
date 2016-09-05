#include "wp3_2.h"
#include "ui_wp3_2.h"

Wp3_2::Wp3_2(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_2)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_2::~Wp3_2()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_2::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_2::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_2::Patient_Class = "К06";


void Wp3_2::on_radioButton_9_clicked(bool checked)
{
    //Нет симптомов
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_2);

    if (checked){
        pdata->setSymptoms(true);
    }else{
        pdata->setSymptoms(false);
    }
}

void Wp3_2::on_spinBox_2_valueChanged(int arg1)
{
    //Число пломбированных зубов
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_2);
    int num_plumb = arg1;
    pdata->setNumber_plumbed_teeth(num_plumb);
}

void Wp3_2::on_spinBox_3_valueChanged(int arg1)
{
    //Число удаленных зуб
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_2);
    int num_ydal = arg1;
    pdata->setNumber_removed_teeth(num_ydal);
}

void Wp3_2::on_spinBox_4_valueChanged(int arg1)
{
    //Число кариезнных зуб
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_2);
    int num_carries = arg1;
    pdata->setNumber_caries_teeth(num_carries);
}

void Wp3_2::on_checkBox_99_clicked(bool checked)
{
    //Требуется дополь
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_2);

    if (checked){
        pdata->setFurtherInvestigation(true);
    }else{
        pdata->setFurtherInvestigation(false);
    }
}
