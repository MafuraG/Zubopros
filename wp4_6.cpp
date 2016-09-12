#include "wp4_6.h"
#include "ui_wp4_6.h"

Wp4_6::Wp4_6(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp4_6)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp4_6::~Wp4_6()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp4_6::patientHistory() const
{
    return m_patientHistory;
}

void Wp4_6::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp4_6::Patient_Class = "K14";

void Wp4_6::on_radioButton_38_clicked(bool checked)
{
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_4_6,checked);
}

void Wp4_6::on_checkBox_186_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_186->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_187_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_187->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_195_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_195->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_188_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_188->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_196_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_196->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_189_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_189->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_197_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_197->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_191_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_191->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_192_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_192->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_193_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_193->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_194_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_194->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_98_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_4_6,checked);
}

void Wp4_6::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}
