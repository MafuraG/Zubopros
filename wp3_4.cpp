#include "wp3_4.h"
#include "ui_wp3_4.h"

Wp3_4::Wp3_4(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_4)
{
    ui->setupUi(this);
}

Wp3_4::~Wp3_4()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_4::patientHistory()
{
    return m_patientHistory;
}

void Wp3_4::setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
    patientHistory->setPatientClass(PgGlobalConstants::WP_3_4,Wp3_4::Patient_Class);
}

QString Wp3_4::Patient_Class = "КО4";



void Wp3_4::on_radioButton_8_clicked(bool checked)
{//simptomi
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_4,checked);
}

void Wp3_4::on_checkBox_31_clicked(bool checked)
{
    QString sym_text = ui->checkBox_31->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_4,checked,sym_text);
}

void Wp3_4::on_checkBox_32_clicked(bool checked)
{
    QString sym_text = ui->checkBox_32->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_4,checked,sym_text);
}

void Wp3_4::on_checkBox_33_clicked(bool checked)
{
    QString sym_text = ui->checkBox_33->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_4,checked,sym_text);
}

void Wp3_4::on_checkBox_34_clicked(bool checked)
{
    QString sym_text = ui->checkBox_34->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_4,checked,sym_text);
}

void Wp3_4::on_checkBox_35_clicked(bool checked)
{//treb dopolnit
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_4,checked);
}

void Wp3_4::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_4::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_31, value);
    setCheckBoxEnabled(ui->checkBox_32, value);
    setCheckBoxEnabled(ui->checkBox_33, value);
    setCheckBoxEnabled(ui->checkBox_34, value);
}
