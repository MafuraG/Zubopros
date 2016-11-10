#include "wp3_6.h"
#include "ui_wp3_6.h"

Wp3_6::Wp3_6(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_6)
{
    ui->setupUi(this);


}

Wp3_6::~Wp3_6()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_6::patientHistory()
{
    return m_patientHistory;
}

void Wp3_6::setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
    patientHistory->setPatientClass(PgGlobalConstants::WP_3_6,Wp3_6::Patient_Class);
}

QString Wp3_6::Patient_Class = "КО5.2 К05.3 К05.4";



void Wp3_6::on_radioButton_13_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_6,checked);
}

void Wp3_6::on_checkBox_4_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_4->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_6, checked,sym_txt);
}

void Wp3_6::on_checkBox_42_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_42->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_6, checked,sym_txt);
}

void Wp3_6::on_checkBox_43_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_43->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_6, checked,sym_txt);
}

void Wp3_6::on_checkBox_5_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_5->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_6, checked,sym_txt);
}

void Wp3_6::on_checkBox_44_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_44->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_6, checked,sym_txt);
}

void Wp3_6::on_checkBox_45_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_45->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_6, checked,sym_txt);
}

void Wp3_6::on_checkBox_6_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_6->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_6, checked,sym_txt);
}

void Wp3_6::on_checkBox_46_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_6,checked);
}

void Wp3_6::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_6::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_4, value);
    setCheckBoxEnabled(ui->checkBox_42, value);
    setCheckBoxEnabled(ui->checkBox_43, value);
    setCheckBoxEnabled(ui->checkBox_5, value);
    setCheckBoxEnabled(ui->checkBox_44, value);
    setCheckBoxEnabled(ui->checkBox_45, value);
    setCheckBoxEnabled(ui->checkBox_6, value);
}
