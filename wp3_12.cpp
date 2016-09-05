#include "wp3_12.h"
#include "ui_wp3_12.h"

Wp3_12::Wp3_12(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_12)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}
Wp3_12::~Wp3_12()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_12::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_12::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_12::Patient_Class = "К10.";

void Wp3_12::on_radioButton_19_clicked(bool checked)
{
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_12,checked);
}

void Wp3_12::on_checkBox_74_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_74->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_12,checked,sym_txt);
}

void Wp3_12::on_checkBox_75_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_75->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_12,checked,sym_txt);
}

void Wp3_12::on_checkBox_76_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_76->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_12,checked,sym_txt);
}

void Wp3_12::on_checkBox_77_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_77->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_12,checked,sym_txt);
}

void Wp3_12::on_checkBox_78_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_78->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_12,checked,sym_txt);
}

void Wp3_12::on_checkBox_73_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_12,checked);
}
