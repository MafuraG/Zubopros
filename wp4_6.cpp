#include "wp4_6.h"
#include "ui_wp4_6.h"

Wp4_6::Wp4_6(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp4_6)
{
    ui->setupUi(this);


}

Wp4_6::~Wp4_6()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp4_6::patientHistory()
{
    return m_patientHistory;
}

void Wp4_6::setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
    patientHistory->setPatientClass(PgGlobalConstants::WP_4_6,Wp4_6::Patient_Class);
}

QString Wp4_6::Patient_Class = "K14";

void Wp4_6::on_radioButton_38_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_4_6,checked);
}

void Wp4_6::on_checkBox_186_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_186->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_187_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_187->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_195_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_195->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_188_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_188->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_196_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_196->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_189_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_189->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_197_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_197->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_191_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_191->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_192_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_192->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_193_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_193->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_194_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_194->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_6,checked,sym_txt);
}

void Wp4_6::on_checkBox_98_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_4_6,checked);
}

void Wp4_6::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp4_6::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_186, value);
    setCheckBoxEnabled(ui->checkBox_187, value);
    setCheckBoxEnabled(ui->checkBox_195, value);
    setCheckBoxEnabled(ui->checkBox_188, value);
    setCheckBoxEnabled(ui->checkBox_196, value);
    setCheckBoxEnabled(ui->checkBox_189, value);
    setCheckBoxEnabled(ui->checkBox_197, value);
    setCheckBoxEnabled(ui->checkBox_191, value);
    setCheckBoxEnabled(ui->checkBox_192, value);
    setCheckBoxEnabled(ui->checkBox_193, value);
    setCheckBoxEnabled(ui->checkBox_194, value);
}
