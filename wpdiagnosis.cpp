#include "wpdiagnosis.h"
#include "ui_wpdiagnosis.h"

WpDiagnosis::WpDiagnosis(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory):
    QWizardPage(parent),
    ui(new Ui::WpDiagnosis)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

WpDiagnosis::~WpDiagnosis()
{
    delete ui;
}
std::shared_ptr<PatientHistory> WpDiagnosis::patientHistory() const
{
    return m_patientHistory;
}

void WpDiagnosis::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

