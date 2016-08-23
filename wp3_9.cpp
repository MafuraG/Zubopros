#include "wp3_9.h"
#include "ui_wp3_9.h"

Wp3_9::Wp3_9(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_9)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_9::~Wp3_9()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_9::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_9::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

