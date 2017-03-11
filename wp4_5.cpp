#include "wp4_5.h"
#include "ui_wp4_5.h"

Wp4_5::Wp4_5(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp4_5)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
    next_id = -99;
}

Wp4_5::~Wp4_5()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp4_5::patientHistory() const
{
    return m_patientHistory;
}

void Wp4_5::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp4_5::Patient_Class = "КО13.0";

void Wp4_5::on_radioButton_22_clicked(bool checked)
{
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_4_5,checked);
}

void Wp4_5::on_checkBox_89_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_89->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_90_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_90->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_91_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_91->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_92_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_92->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_93_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_93->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_94_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_94->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_95_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_95->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_96_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_96->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_97_clicked(bool checked)
{
    QString sym_txt = ui->checkBox_97->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_4_5,checked,sym_txt);
}

void Wp4_5::on_checkBox_88_clicked(bool checked)
{
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_4_5,checked);
}

void Wp4_5::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp4_5::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_89, value);
    setCheckBoxEnabled(ui->checkBox_90, value);
    setCheckBoxEnabled(ui->checkBox_91, value);
    setCheckBoxEnabled(ui->checkBox_92, value);
    setCheckBoxEnabled(ui->checkBox_93, value);
    setCheckBoxEnabled(ui->checkBox_94, value);
    setCheckBoxEnabled(ui->checkBox_95, value);
    setCheckBoxEnabled(ui->checkBox_96, value);
    setCheckBoxEnabled(ui->checkBox_97, value);
}


int Wp4_5::nextId() const
{
    if(m_patientHistory->navigate() == false ) return QWizardPage::nextId();
    else {
        //setNavigate(false);
        return m_patientHistory->nextpage();
    }
}
