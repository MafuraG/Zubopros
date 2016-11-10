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


