#include "wp3_4.h"
#include "ui_wp3_4.h"

Wp3_4::Wp3_4(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_4)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_4::~Wp3_4()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_4::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_4::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_4::Patient_Class = "КО4";



void Wp3_4::on_radioButton_8_clicked(bool checked)
{//simptomi
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_4,checked);
}

void Wp3_4::on_checkBox_31_clicked(bool checked)
{
    QString sym_text = ui->checkBox_31->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_4,checked,sym_text);
}

void Wp3_4::on_checkBox_32_clicked(bool checked)
{
    QString sym_text = ui->checkBox_32->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_4,checked,sym_text);
}

void Wp3_4::on_checkBox_33_clicked(bool checked)
{
    QString sym_text = ui->checkBox_33->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_4,checked,sym_text);
}

void Wp3_4::on_checkBox_34_clicked(bool checked)
{
    QString sym_text = ui->checkBox_34->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_4,checked,sym_text);
}

void Wp3_4::on_checkBox_35_clicked(bool checked)
{//treb dopolnit
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_4,checked);
}

void Wp3_4::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}
