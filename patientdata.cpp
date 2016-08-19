#include "patientdata.h"

PatientData::PatientData()
{

}

PatientData::~PatientData()
{

}
QStringList PatientData::symptomList() const
{
    return m_symptomList;
}

void PatientData::setSymptomList(const QStringList &symptomList)
{
    m_symptomList = symptomList;
}
QString PatientData::patientClass() const
{
    return m_patientClass;
}

void PatientData::setPatientClass(const QString &patientClass)
{
    m_patientClass = patientClass;
}
QString PatientData::title() const
{
    return m_title;
}

void PatientData::setTitle(const QString &title)
{
    m_title = title;
}




