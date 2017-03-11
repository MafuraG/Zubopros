#include "wp3_3.h"
#include "ui_wp3_3.h"

Wp3_3::Wp3_3(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_3)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
    next_id = -99;
}

Wp3_3::~Wp3_3()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_3::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_3::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}

QString Wp3_3::Patient_Class = "КО3";



void Wp3_3::on_radioButton_40_clicked(bool checked)
{
    //Нет симптомов
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_3);
    }else{
        enableCheckBoxes(false);
    }
    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_3,checked);	
}

void Wp3_3::on_checkBox_222_clicked(bool checked)
{
    //Требуется дополь
    patientHistory()->setPatientFurtherInvestigation(PgGlobalConstants::WP_3_3,checked);
}

void Wp3_3::on_checkBox_221_clicked(bool checked)
{
    QString symthom_text = ui->checkBox_221->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_3,checked,symthom_text);
}

void Wp3_3::on_checkBox_225_clicked(bool checked)
{
    QString symthom_text = ui->checkBox_225->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_3,checked,symthom_text);
}

void Wp3_3::on_checkBox_229_clicked(bool checked)
{
    QString symthom_text = ui->checkBox_229->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_3,checked,symthom_text);
}

void Wp3_3::on_checkBox_227_clicked(bool checked)
{
    QString symthom_text = ui->checkBox_227->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_3,checked,symthom_text);
}

void Wp3_3::on_checkBox_223_clicked(bool checked)
{
   QString symthom_text = ui->checkBox_223->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_3,checked,symthom_text);
}

void Wp3_3::on_checkBox_224_clicked(bool checked)
{
   QString symthom_text = ui->checkBox_224->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_3,checked,symthom_text);
}

void Wp3_3::on_checkBox_228_clicked(bool checked)
{
    QString symthom_text = ui->checkBox_228->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_3,checked,symthom_text);
}

void Wp3_3::on_checkBox_226_clicked(bool checked)
{
    QString symthom_text = ui->checkBox_226->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_3,checked,symthom_text);
}

void Wp3_3::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_3::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_221, value);
    setCheckBoxEnabled(ui->checkBox_225, value);
    setCheckBoxEnabled(ui->checkBox_223, value);
    setCheckBoxEnabled(ui->checkBox_229, value);
    setCheckBoxEnabled(ui->checkBox_227, value);
    setCheckBoxEnabled(ui->checkBox_224, value);
    setCheckBoxEnabled(ui->checkBox_228, value);
    setCheckBoxEnabled(ui->checkBox_226, value);
}


int Wp3_3::nextId() const
{
    if(m_patientHistory->navigate() == false ) return QWizardPage::nextId();
    else {
        //setNavigate(false);
        return m_patientHistory->nextpage();
    }
}
