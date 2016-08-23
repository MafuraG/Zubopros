#include "wp3_2.h"
#include "ui_wp3_2.h"

Wp3_2::Wp3_2(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_2)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_2::~Wp3_2()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_2::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_2::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

