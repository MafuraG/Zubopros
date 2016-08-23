#include "wp3_4.h"
#include "ui_wp3_4.h"

Wp3_4::Wp3_4(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_4)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_4::~Wp3_4()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_4::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_4::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


