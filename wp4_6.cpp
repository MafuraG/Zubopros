#include "wp4_6.h"
#include "ui_wp4_6.h"

Wp4_6::Wp4_6(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp4_6)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp4_6::~Wp4_6()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp4_6::patientHistory() const
{
    return m_patientHistory;
}

void Wp4_6::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


