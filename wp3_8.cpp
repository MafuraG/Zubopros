#include "wp3_8.h"
#include "ui_wp3_8.h"

Wp3_8::Wp3_8(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_8)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_8::~Wp3_8()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_8::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_8::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


