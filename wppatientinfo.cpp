#include "wppatientinfo.h"
#include "ui_wppatientinfo.h"
#include "dentistwizard.h"


WpPatientInfo::WpPatientInfo(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WpPatientInfo)
{
    ui->setupUi(this);    
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
}

WpPatientInfo::~WpPatientInfo()
{
    delete ui;
}

std::shared_ptr<PatientHistory> WpPatientInfo::patientHistory()
{
    return m_patientHistory;
}

void WpPatientInfo::setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

int WpPatientInfo::nextId() const
{
    return PgGlobalConstants::WP_PatientClass;
}


void WpPatientInfo::on_lineEdit_editingFinished()
{
    QString fio = ui->lineEdit->text();
    patientHistory()->setFio(fio);
}

void WpPatientInfo::on_dateTimeEdit_editingFinished()
{
    QDate date = ui->dateTimeEdit->date();
    patientHistory()->setDate(date);
}

void WpPatientInfo::on_spinBox_editingFinished()
{
    uint age = ui->spinBox->value();
    patientHistory()->setAge(age);
}
