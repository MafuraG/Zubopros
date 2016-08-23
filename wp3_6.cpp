#include "wp3_6.h"
#include "ui_wp3_6.h"

Wp3_6::Wp3_6(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_6)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_6::~Wp3_6()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_6::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_6::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


