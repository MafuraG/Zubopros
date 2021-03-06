#include "wp3_7.h"
#include "ui_wp3_7.h"

Wp3_7::Wp3_7(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_7)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
    next_id = -99;
}

Wp3_7::~Wp3_7()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_7::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_7::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_7::Patient_Class = "КО6";



void Wp3_7::on_radioButton_14_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_7,checked);
}

void Wp3_7::on_checkBox_2_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_2->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_7,checked,sym_txt);
}

void Wp3_7::on_checkBox_3_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_3->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_7,checked,sym_txt);
}

void Wp3_7::on_checkBox_15_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_15->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_7,checked,sym_txt);
}

void Wp3_7::on_checkBox_47_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_47->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_7,checked,sym_txt);
}

void Wp3_7::on_checkBox_48_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_48->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_7,checked,sym_txt);
}

void Wp3_7::on_checkBox_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_7,checked);
}

void Wp3_7::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_7::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_2, value);
    setCheckBoxEnabled(ui->checkBox_3, value);
    setCheckBoxEnabled(ui->checkBox_15, value);
    setCheckBoxEnabled(ui->checkBox_47, value);
    setCheckBoxEnabled(ui->checkBox_48, value);
}


int Wp3_7::nextId() const
{
    if(m_patientHistory->navigate() == false ) return QWizardPage::nextId();
    else {
        //setNavigate(false);
        return m_patientHistory->nextpage();
    }
}
