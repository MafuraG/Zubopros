#include "diagnosisform.h"
#include "ui_diagnosisform.h"

DiagnosisForm::DiagnosisForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiagnosisForm)
{
    ui->setupUi(this);
}

void DiagnosisForm::setFIO(QString &fio)
{
    QString fullText = ui->textBrowser->document()->toHtml();
    fullText = fullText.replace("P1",fio);
    ui->textBrowser->document()->setHtml(fullText);
}

DiagnosisForm::~DiagnosisForm()
{
    delete ui;
}
