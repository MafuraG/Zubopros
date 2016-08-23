#include "wp3_5.h"
#include "ui_wp3_5.h"

Wp3_5::Wp3_5(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_5)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_5::~Wp3_5()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_5::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_5::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


