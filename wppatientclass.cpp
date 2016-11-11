#include "wppatientclass.h"
#include "ui_wppatientclass.h"

WpPatientClass::WpPatientClass(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WpPatientClass)
{
    ui->setupUi(this);    
}

WpPatientClass::~WpPatientClass()
{
    delete ui;
}

std::shared_ptr<PatientHistory> WpPatientClass::patientHistory()
{
    return m_patientHistory;
}

void WpPatientClass::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;   
}



void WpPatientClass::on_radioButton_clicked(bool checked)
{
    if (checked){
        patientHistory()->setPclass(PatientClass::class1);
    }
}

void WpPatientClass::on_radioButton_2_clicked(bool checked)
{
    if (checked){
        patientHistory()->setPclass(PatientClass::class2);
    }
}

void WpPatientClass::on_radioButton_3_clicked(bool checked)
{
    if (checked){
        patientHistory()->setPclass(PatientClass::class3_1);
    }
}

void WpPatientClass::on_radioButton_4_clicked(bool checked)
{
    if (checked){
        patientHistory()->setPclass(PatientClass::class3_2);
    }
}

void WpPatientClass::on_radioButton_5_clicked(bool checked)
{
    if (checked){
        patientHistory()->setPclass(PatientClass::class3_3);
    }
}

void WpPatientClass::on_radioButton_23_clicked(bool checked)
{
    if (checked){
        patientHistory()->setPclass(PatientClass::class3_4);
    }
}


void WpPatientClass::on_radioButton_6_clicked(bool checked)
{
    if (checked){
        patientHistory()->setPclass(PatientClass::class4);
    }
}
