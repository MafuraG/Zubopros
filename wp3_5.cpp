#include "wp3_5.h"
#include "ui_wp3_5.h"

Wp3_5::Wp3_5(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_5)
{
    ui->setupUi(this);


}

Wp3_5::~Wp3_5()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_5::patientHistory()
{
    return m_patientHistory;
}

void Wp3_5::setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
    patientHistory->setPatientClass(PgGlobalConstants::WP_3_5,Wp3_5::Patient_Class);
}

QString Wp3_5::Patient_Class = "КО5";



void Wp3_5::on_radioButton_12_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_5,checked);
}

void Wp3_5::on_checkBox_36_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_36->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_37_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_37->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_38_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_38->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_39_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_39->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_40_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_40->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_5,checked,sym_txt);
}

void Wp3_5::on_checkBox_41_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_5,checked);
}

void Wp3_5::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_5::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_36, value);
    setCheckBoxEnabled(ui->checkBox_37, value);
    setCheckBoxEnabled(ui->checkBox_38, value);
    setCheckBoxEnabled(ui->checkBox_39, value);
    setCheckBoxEnabled(ui->checkBox_40, value);
}
