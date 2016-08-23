#include "wppatientclass.h"
#include "ui_wppatientclass.h"

WpPatientClass::WpPatientClass(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::WpPatientClass)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

WpPatientClass::~WpPatientClass()
{
    delete ui;
}

std::shared_ptr<PatientHistory> WpPatientClass::patientHistory() const
{
    return m_patientHistory;
}

void WpPatientClass::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


