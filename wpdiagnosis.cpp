#include "wpdiagnosis.h"
#include "ui_wpdiagnosis.h"

WpDiagnosis::WpDiagnosis(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory):
    QWizardPage(parent),
    ui(new Ui::WpDiagnosis)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
    dform = new DiagnosisForm();
}

WpDiagnosis::~WpDiagnosis()
{
    delete ui;
    delete dform;
}
std::shared_ptr<PatientHistory> WpDiagnosis::patientHistory() const
{
    return m_patientHistory;
}

void WpDiagnosis::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


void WpDiagnosis::on_diagnosisButton_clicked()
{
    dform->show();
}
