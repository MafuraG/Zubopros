#include "patienthistory.h"

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
       pdata->symptomList().append(symthom_text);
    }else{
       pdata->symptomList().removeAll(symthom_text);
    }
}

void PatientHistory::clearPatientSymthomList(int wp_page)
{
    auto pdata = patientInfo()->value(wp_page);
    pdata->symptomList().clear();
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
