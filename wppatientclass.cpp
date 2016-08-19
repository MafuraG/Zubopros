#include "wppatientclass.h"
#include "ui_wppatientclass.h"

WpPatientClass::WpPatientClass(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WpPatientClass)
{
    ui->setupUi(this);
}

WpPatientClass::~WpPatientClass()
{
    delete ui;
}
