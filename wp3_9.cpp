#include "wp3_9.h"
#include "ui_wp3_9.h"

Wp3_9::Wp3_9(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_9)
{
    ui->setupUi(this);


}

Wp3_9::~Wp3_9()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_9::patientHistory()
{
    return m_patientHistory;
}

void Wp3_9::setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
    patientHistory->setPatientClass(PgGlobalConstants::WP_3_9,Wp3_9::Patient_Class);
}

QString Wp3_9::Patient_Class = "КО7.6";

void Wp3_9::on_radioButton_16_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_9,checked);
}

void Wp3_9::on_checkBox_53_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_53->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_58_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_58->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_59_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_59->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_60_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_60->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_61_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_61->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_9,checked, sym_txt);
}

void Wp3_9::on_checkBox_52_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_9,checked);
}

void Wp3_9::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_9::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_53, value);
    setCheckBoxEnabled(ui->checkBox_58, value);
    setCheckBoxEnabled(ui->checkBox_59, value);
    setCheckBoxEnabled(ui->checkBox_60, value);
    setCheckBoxEnabled(ui->checkBox_61, value);
}
