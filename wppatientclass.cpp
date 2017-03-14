#include "wppatientclass.h"
#include "ui_wppatientclass.h"

WpPatientClass::WpPatientClass(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WpPatientClass)
{
    ui->setupUi(this);    
    next_id = -99;
}

WpPatientClass::~WpPatientClass()
{
    delete ui;
}

std::shared_ptr<PatientHistory> WpPatientClass::patientHistory()
{
    return m_patientHistory;
}

void WpPatientClass::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

int WpPatientClass::nextId() const
{
    if(m_patientHistory->navigate() == false ) return QWizardPage::nextId();
    else {
        //setNavigate(false);
        return m_patientHistory->nextpage();
    }
}
