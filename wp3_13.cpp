#include "wp3_13.h"
#include "ui_wp3_13.h"

Wp3_13::Wp3_13(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_13)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}
Wp3_13::~Wp3_13()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_13::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_13::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_13::Patient_Class = "КО11";



void Wp3_13::on_radioButton_20_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_13,checked);
}

void Wp3_13::on_checkBox_79_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_79->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_13,checked,sym_txt);
}

void Wp3_13::on_checkBox_80_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_80->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_13,checked,sym_txt);
}

void Wp3_13::on_checkBox_81_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_81->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_13,checked,sym_txt);
}

void Wp3_13::on_checkBox_82_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_82->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_13,checked,sym_txt);
}

void Wp3_13::on_checkBox_84_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_84->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_13,checked,sym_txt);
}

void Wp3_13::on_checkBox_83_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_13,checked);
}

void Wp3_13::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_13::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_79, value);
    setCheckBoxEnabled(ui->checkBox_80, value);
    setCheckBoxEnabled(ui->checkBox_81, value);
    setCheckBoxEnabled(ui->checkBox_82, value);
    setCheckBoxEnabled(ui->checkBox_84, value);
}
