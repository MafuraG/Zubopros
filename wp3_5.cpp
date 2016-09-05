#include "wp3_5.h"
#include "ui_wp3_5.h"

Wp3_5::Wp3_5(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_5)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_5::~Wp3_5()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_5::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_5::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_5::Patient_Class = "КО5";



void Wp3_5::on_radioButton_12_clicked(bool checked)
{
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_5,checked);
}

void Wp3_5::on_checkBox_36_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_36->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_37_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_37->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_38_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_38->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_39_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_39->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_40_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_40->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_41_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_5,checked);
}
