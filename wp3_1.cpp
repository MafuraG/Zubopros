#include "wp3_1.h"
#include "ui_wp3_1.h"
#include <QDebug>

Wp3_1::Wp3_1(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory) :
    QWizardPage(parent),
    ui(new Ui::Wp3_1)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
}

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
}

bool Wp3_1::validatePage()
{
    qDebug()<<"Valid called in wp3_1";
    return true;
}

int Wp3_1::nextId() const
{
    qDebug()<<"going to next page";
    return PgGlobalConstants::WP_3_2;
}

