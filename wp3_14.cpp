#include "wp3_14.h"
#include "ui_wp3_14.h"

Wp3_14::Wp3_14(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_14)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_14::~Wp3_14()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_14::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_14::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


