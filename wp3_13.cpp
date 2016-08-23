#include "wp3_13.h"
#include "ui_wp3_13.h"

Wp3_13::Wp3_13(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_13)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}
Wp3_13::~Wp3_13()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_13::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_13::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


