#include "wppatientinfo.h"
#include "ui_wppatientinfo.h"
#include "dentistwizard.h"


WpPatientInfo::WpPatientInfo(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::WpPatientInfo)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

WpPatientInfo::~WpPatientInfo()
{
    delete ui;
}

std::shared_ptr<PatientHistory> WpPatientInfo::patientHistory() const
{
    return m_patientHistory;
}

void WpPatientInfo::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

int WpPatientInfo::nextId() const
{
    return PgGlobalConstants::WP_PatientClass;
}

