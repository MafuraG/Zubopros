#include "wp3_10.h"
#include "ui_wp3_10.h"


Wp3_10::Wp3_10(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory):
    QWizardPage(parent),
    ui(new Ui::Wp3_10)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_10::~Wp3_10()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_10::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_10::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_10::Patient_Class = "КО8";

void Wp3_10::on_radioButton_17_clicked(bool checked)
{
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_10,checked);
}

void Wp3_10::on_checkBox_63_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_63->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_10,checked,sym_txt);
}

void Wp3_10::on_checkBox_64_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_64->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_10,checked,sym_txt);
}

void Wp3_10::on_checkBox_65_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_65->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_10,checked,sym_txt);
}

void Wp3_10::on_checkBox_69_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_69->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_10,checked,sym_txt);
}

void Wp3_10::on_checkBox_67_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_67->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_10,checked,sym_txt);
}

void Wp3_10::on_checkBox_68_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_68->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_10,checked,sym_txt;
}

void Wp3_10::on_checkBox_62_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_10,checked);
}

void Wp3_10::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}
