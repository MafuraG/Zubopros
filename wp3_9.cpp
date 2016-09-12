#include "wp3_9.h"
#include "ui_wp3_9.h"

Wp3_9::Wp3_9(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_9)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

Wp3_9::~Wp3_9()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_9::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_9::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_9::Patient_Class = "КО7.6";

void Wp3_9::on_radioButton_16_clicked(bool checked)
{
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_9,checked);
}

void Wp3_9::on_checkBox_53_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_53->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_58_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_58->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_59_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_59->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_60_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_60->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_61_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_61->text();
    patientHistory()->setPaptientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_52_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_9,checked);
}

void Wp3_9::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}
