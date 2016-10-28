#include "diagnosisform.h"
#include "ui_diagnosisform.h"

DiagnosisForm::DiagnosisForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiagnosisForm)
{
    ui->setupUi(this);
}

DiagnosisForm::~DiagnosisForm()
{
    delete ui;
}
