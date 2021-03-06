#include "wp3_11.h"
#include "ui_wp3_11.h"

Wp3_11::Wp3_11(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_11)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
    next_id = -99;
}


Wp3_11::~Wp3_11()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_11::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_11::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_11::Patient_Class = "КО9";


void Wp3_11::on_radioButton_18_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_11);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_11,checked);
}

void Wp3_11::on_checkBox_70_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_70->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_11,checked,sym_txt);
}

void Wp3_11::on_checkBox_71_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_71->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_11,checked,sym_txt);
}

void Wp3_11::on_checkBox_72_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_72->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_11,checked,sym_txt);
}

void Wp3_11::on_checkBox_66_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_11,checked);
}

void Wp3_11::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_11::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_70, value);
    setCheckBoxEnabled(ui->checkBox_71, value);
    setCheckBoxEnabled(ui->checkBox_72, value);
}


int Wp3_11::nextId() const
{
    if(m_patientHistory->navigate() == false ) return QWizardPage::nextId();
    else {
        //setNavigate(false);
        return m_patientHistory->nextpage();
    }
}
