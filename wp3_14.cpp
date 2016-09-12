#include "wp3_14.h"
#include "ui_wp3_14.h"

Wp3_14::Wp3_14(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_14)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_14::~Wp3_14()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_14::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_14::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_14::Patient_Class = "КО12.0";

void Wp3_14::on_radioButton_21_clicked(bool checked)
{
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_14,checked);
}

void Wp3_14::on_checkBox_7_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_7->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_8_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_8->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_86_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_86->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_87_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_87->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_9_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_9->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_10_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_10->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_13_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_13->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_12_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_12->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_14_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_14->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_11_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_11->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_14,checked, sym_txt);
}

void Wp3_14::on_checkBox_85_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_14);
}

void Wp3_14::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}
