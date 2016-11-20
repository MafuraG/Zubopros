#include "patienthistory.h"
#include <QDebug>

PatientHistory::PatientHistory()
{
    initPatientInfo();
    initPatientData();
}

std::shared_ptr<QHash<int, std::shared_ptr<PatientData> > > PatientHistory::patientInfo() const
{
    return m_patientInfo;
}

void PatientHistory::initPatientData()
{
    //initialize pointers to patient data for each wizard page
    auto _hash = patientInfo();

    _hash->insert(PgGlobalConstants::WP_3_1,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_2,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_3,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_4,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_5,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_6,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_7,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_8,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_9,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_10,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_11,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_12,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_13,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_3_14,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_4_5,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_4_6,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_PatientClass,std::make_shared<PatientData>());
    _hash->insert(PgGlobalConstants::WP_PatientInfo,std::make_shared<PatientData>());
}

void PatientHistory::initPatientInfo()
{
    m_patientInfo = std::make_shared<QHash<int, std::shared_ptr<PatientData>>>();
}

void PatientHistory::setPatientSymthomsList(int wp_page,bool checked, QString value)
{    
    auto pdata = patientInfo()->value(wp_page);
    QString symthom_text = value;
    if (checked){
       pdata->addSymtom(symthom_text);
    }else{
       pdata->removeSymtom(symthom_text);
    }
}

void PatientHistory::clearPatientSymthomList(int wp_page)
{
    auto pdata = patientInfo()->value(wp_page);
    QStringList emptyL;
    pdata->setSymptomList(emptyL);
}

void PatientHistory::setPatientSymthoms(int wp_page, bool value)
{
    auto pdata = patientInfo()->value(wp_page);

    if (value){
        pdata->setSymptoms(true);
    }else{
        pdata->setSymptoms(false);
    }
}

void PatientHistory::setPatientFurtherInvestigation(int wp_page, bool value)
{
    auto pdata = patientInfo()->value(wp_page);

    if (value){
        pdata->setFurtherInvestigation(true);
    }else{
        pdata->setFurtherInvestigation(false);
    }
}

void PatientHistory::setPatientClass(int wp_page, QString value)
{
    std::shared_ptr<PatientData> pdata = patientInfo()->value(wp_page);

    pdata->setPatientClass(value);
}

void PatientHistory::diagnosis(QStringList &groupD2,
                                QStringList &groupD3,
                                QStringList &groupAllowed)
{
   groupAllowed.clear();
   groupD2.clear();
   groupD3.clear();

   for (int i = 0; i < patientInfo()->keys().count(); i++){
       int key = patientInfo()->keys()[i];
       if (key == PgGlobalConstants::WP_PatientClass ||
           key == PgGlobalConstants::WP_PatientInfo) continue;
       std::shared_ptr<PatientData> pInfo = patientInfo()->value(key);


       if (pInfo->furtherInvestigation() == false){
           if (pInfo->symptomList().count() == 0){
               groupD2.append(pInfo->patientClass());
               qDebug()<<"D2 = "<<pInfo->patientClass();
           }else{
               groupD3.append(pInfo->patientClass());
               qDebug()<<"D3 = "<<pInfo->patientClass();
           }
       }else{
            groupAllowed.append(pInfo->patientClass());
            qDebug()<<"D3 not allowed = "<<pInfo->patientClass();
       }


   }
}

QString PatientHistory::fio() const
{
    return m_fio;
}

void PatientHistory::setFio(const QString &fio)
{
    m_fio = fio;
}

QDate PatientHistory::date() const
{
    return m_date;
}

void PatientHistory::setDate(const QDate &date)
{
    m_date = date;
}

uint PatientHistory::age() const
{
    return m_age;
}

void PatientHistory::setAge(const uint &age)
{
    m_age = age;
}

PatientClass::PatientClassEnum PatientHistory::pclass() const
{
    return m_pclass;
}

QString PatientHistory::pclass_Str()const
{
    return PatientClass::toString(pclass());
}

void PatientHistory::setPclass(const PatientClass::PatientClassEnum &pclass)
{
    m_pclass = pclass;
}
