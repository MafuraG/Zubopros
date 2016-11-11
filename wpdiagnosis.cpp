#include "wpdiagnosis.h"
#include "ui_wpdiagnosis.h"
#include <QDebug>

WpDiagnosis::WpDiagnosis(QWidget *parent, std::shared_ptr<PatientHistory> patientHistory):
    QWizardPage(parent),
    ui(new Ui::WpDiagnosis)
{
    ui->setupUi(this);
    setPatientHistory(patientHistory);
    dform = new DiagnosisForm();
}

WpDiagnosis::~WpDiagnosis()
{
    delete ui;
    delete dform;
}
std::shared_ptr<PatientHistory> WpDiagnosis::patientHistory() const
{
    return m_patientHistory;
}

void WpDiagnosis::setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory)
{
    m_patientHistory = patientHistory;
}


void WpDiagnosis::on_diagnosisButton_clicked()
{
    dform->resetTemplate();
    //fio
    QString fio = patientHistory()->fio();
    dform->setFIO(fio);
    //класс условия труда
    QString pclass = patientHistory()->pclass_Str();
    dform->setPatientClass(pclass);
    //Заключение
    QStringList grD2,grD3,grAllowed;
    patientHistory()->diagnosis(grD2,grD3,grAllowed);

    qDebug()<<"groupD2 count"<<grD2.count();
    qDebug()<<"groupD3 count"<<grD3.count();
    qDebug()<<"Not allowed count"<<grAllowed.count();
    if (grD2.count() > 0)
    {
        QString d2 = joinStrings(grD2);
        dform->setDiagnosis(PgGlobalConstants::CLEARED);
        dform->setPatientGroup(QString("Д2"));
        dform->setDiagClasses(d2);
        dform->setCheckupTimes(QString("2"));
    }else{
        if (grD3.count()>0){
            QString d3 = joinStrings(grD3);
            dform->setDiagnosis(PgGlobalConstants::CLEARED);
            dform->setPatientGroup(QString("Д3"));
            dform->setDiagClasses(d3);
            dform->setCheckupTimes(QString("3"));
        }else{
            if (grAllowed.count() > 0){
                QString gr = joinStrings(grAllowed);
                QString str = PgGlobalConstants::NOT_CLEARED + gr + ".";
                dform->setDiagnosis(PgGlobalConstants::CLEARED);
                dform->setPatientGroup(QString("Д3"));
                dform->setDiagClasses(gr);
                dform->setCheckupTimes(QString("3"));
            }
        }
    }

    dform->show();
}

QString WpDiagnosis::joinStrings(const QStringList &list ){
    QString res;

    for(int i = 0; i < list.count(); i++)
    {
        if (i == 0 && list.count() == 1) res += list[i]; //first element
        if (i != 0 && i < (list.count() - 2)) res += list[i] + ", ";
        if (i != 0 && i == list.count() - 1) res += list[i];//last element
    }

    return res;
}
