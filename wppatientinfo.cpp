#include "wppatientinfo.h"
#include "ui_wppatientinfo.h"
#include "dentistwizard.h"

WpPatientInfo::WpPatientInfo(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WpPatientInfo)
{
    ui->setupUi(this);
}

WpPatientInfo::~WpPatientInfo()
{
    delete ui;
}

int WpPatientInfo::nextId() const
{
    return DentistWizard::WP_PatientClass;
}
