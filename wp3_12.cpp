#include "wp3_12.h"
#include "ui_wp3_12.h"

Wp3_12::Wp3_12(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_12)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}
Wp3_12::~Wp3_12()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_12::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_12::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

