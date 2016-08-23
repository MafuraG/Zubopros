#include "wp3_7.h"
#include "ui_wp3_7.h"

Wp3_7::Wp3_7(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_7)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_7::~Wp3_7()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_7::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_7::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


