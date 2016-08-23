#include "wp3_3.h"
#include "ui_wp3_3.h"

Wp3_3::Wp3_3(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_3)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_3::~Wp3_3()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_3::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_3::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


