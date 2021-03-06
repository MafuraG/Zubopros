#include "wp3_8.h"
#include "ui_wp3_8.h"

Wp3_8::Wp3_8(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_8)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
    next_id = -99;
}

Wp3_8::~Wp3_8()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_8::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_8::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_8::Patient_Class = "КО6";



void Wp3_8::on_radioButton_14_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_8,checked);
}

void Wp3_8::on_checkBox_2_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_2->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_8,checked,sym_txt);
}

void Wp3_8::on_checkBox_3_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_3->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_8,checked,sym_txt);
}

void Wp3_8::on_checkBox_47_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_47->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_8,checked,sym_txt);
}

void Wp3_8::on_checkBox_48_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_48->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_8,checked,sym_txt);
}

void Wp3_8::on_checkBox_15_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_15->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_8,checked,sym_txt);
}

void Wp3_8::on_checkBox_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_8,checked);
}

void Wp3_8::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_8::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_2, value);
    setCheckBoxEnabled(ui->checkBox_3, value);
    setCheckBoxEnabled(ui->checkBox_47, value);
    setCheckBoxEnabled(ui->checkBox_48, value);
    setCheckBoxEnabled(ui->checkBox_15, value);
}


int Wp3_8::nextId() const
{
    if(m_patientHistory->navigate() == false ) return QWizardPage::nextId();
    else {
        //setNavigate(false);
        return m_patientHistory->nextpage();
    }
}
