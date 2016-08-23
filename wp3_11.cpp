#include "wp3_11.h"
#include "ui_wp3_11.h"

Wp3_11::Wp3_11(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_11)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}


Wp3_11::~Wp3_11()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_11::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_11::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

