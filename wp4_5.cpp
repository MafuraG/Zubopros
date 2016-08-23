#include "wp4_5.h"
#include "ui_wp4_5.h"

Wp4_5::Wp4_5(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp4_5)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp4_5::~Wp4_5()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp4_5::patientHistory() const
{
    return m_patientHistory;
}

void Wp4_5::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


