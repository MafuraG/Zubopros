#include "wp3_10.h"
#include "ui_wp3_10.h"


Wp3_10::Wp3_10(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory):
    QWizardPage(parent),
    ui(new Ui::Wp3_10)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_10::~Wp3_10()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_10::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_10::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

