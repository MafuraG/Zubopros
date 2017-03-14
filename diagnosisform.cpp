#include "diagnosisform.h"
#include "ui_diagnosisform.h"

DiagnosisForm::DiagnosisForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiagnosisForm)
{
    ui->setupUi(this);
    setDiag_template(ui->textBrowser->document()->toHtml());
}

void DiagnosisForm::setFIO(QString &fio)
{
    setValue("P1",fio);
}

void DiagnosisForm::setPatientClass(QString &pclass)
{
    setValue("P2",pclass);
}

void DiagnosisForm::setDiagnosis(QString &diagnosis)
{
    setValue("P3",diagnosis);
}

void DiagnosisForm::setPatientGroup(QString group)
{
    setValue("P5",group);
}

void DiagnosisForm::setDiagClasses(QString &classes)
{
    setValue("P4",classes);
}

void DiagnosisForm::setCheckupTimes(QString checkupTimes)
{
    setValue("P6",checkupTimes);
}


void DiagnosisForm::setValue(const QString &p, const QString &value )
{
    QString fullText = ui->textBrowser->document()->toHtml();
    fullText = fullText.replace(p,value);
    ui->textBrowser->document()->setHtml(fullText);
}

void DiagnosisForm::resetTemplate()
{
    QString fullText = diag_template();
    ui->textBrowser->document()->setHtml(fullText);
}

DiagnosisForm::~DiagnosisForm()
{
    delete ui;
}

QString DiagnosisForm::diag_template() const
{
    return m_diag_template;
}

void DiagnosisForm::setDiag_template(const QString &diag_template)
{
    m_diag_template = diag_template;
}

