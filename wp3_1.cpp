#include "wp3_1.h"
#include "ui_wp3_1.h"
#include <QDebug>
#include "pgglobalconstants.h"



    QWizardPage(parent),
    ui(new Ui::Wp3_1)
{
    ui->setupUi(this);
    next_id = -99;
}

QString Wp3_1::Patient_Class = "К00, К01";

Wp3_1::~Wp3_1()
{
    delete ui;
}

std::shared_ptr<PatientHistory> Wp3_1::patientHistory() const
{
    return m_patientHistory;
}

void Wp3_1::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
    patientHistory->setPatientClass(PgGlobalConstants::WP_3_1,Wp3_1::Patient_Class);
}

bool Wp3_1::validatePage()
{
    qDebug()<<"Valid called in wp3_1";
    return true;
}

int Wp3_1::nextId() const
{

    if(m_patientHistory->navigate() == false ) return QWizardPage::nextId();
    else {
        //setNavigate(false);
        return m_patientHistory->nextpage();
    }
    //return PgGlobalConstants::WP_3_2;
}


void Wp3_1::on_checkBox_16_clicked(bool checked)
{
    //Пятна белого цвета
    QString sym_text = ui->checkBox_16->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_1,checked,sym_text);

}

void Wp3_1::on_checkBox_17_clicked(bool checked)
{
    QString sym_text = ui->checkBox_17->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_1,checked,sym_text);
}

void Wp3_1::on_checkBox_18_clicked(bool checked)
{    
    QString sym_text = ui->checkBox_18->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_1,checked,sym_text);
}

void Wp3_1::on_checkBox_19_clicked(bool checked)
{
    QString sym_text = ui->checkBox_19->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_1,checked,sym_text);
}

void Wp3_1::on_checkBox_20_clicked(bool checked)
{
    QString sym_text = ui->checkBox_20->text();
    patientHistory()->setPatientSymthomsList(PgGlobalConstants::WP_3_1,checked,sym_text);
}

void Wp3_1::on_checkBox_21_clicked(bool checked)
{
    auto pInfo = m_patientHistory->patientInfo();
    auto pdata = pInfo->value(PgGlobalConstants::WP_3_1);

    if (checked){
        pdata->setFurtherInvestigation(true);
    }else{
        pdata->setFurtherInvestigation(false);
    }
}

void Wp3_1::on_radioButton_7_clicked(bool checked)
{    
    if (!checked){
        enableCheckBoxes(true);
        patientHistory()->clearPatientSymthomList(PgGlobalConstants::WP_3_1);
    }else{       
        enableCheckBoxes(false);
    }

    patientHistory()->setPatientSymthoms(PgGlobalConstants::WP_3_1,checked);
}

void Wp3_1::setCheckBoxEnabled(QCheckBox *chkbox, bool value)
{
    if (chkbox != nullptr) chkbox->setEnabled(value);
}

void Wp3_1::enableCheckBoxes(bool value)
{
    setCheckBoxEnabled(ui->checkBox_16,value);
    setCheckBoxEnabled(ui->checkBox_17,value);
    setCheckBoxEnabled(ui->checkBox_18,value);
    setCheckBoxEnabled(ui->checkBox_19,value);
    setCheckBoxEnabled(ui->checkBox_20,value);

}
