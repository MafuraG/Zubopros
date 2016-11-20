#include "patientdata.h"

PatientData::PatientData()
{

}

PatientData::~PatientData()
{

}
QStringList PatientData::symptomList()
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

bool PatientData::furtherInvestigation() const
{
    return m_furtherInvestigation;
}

void PatientData::setFurtherInvestigation(bool furtherInvestigation)
{
    m_furtherInvestigation = furtherInvestigation;
}

bool PatientData::symptoms() const
{
    return m_symptoms;
}

void PatientData::setSymptoms(bool symptoms)
{
    m_symptoms = symptoms;
}

unsigned int PatientData::number_plumbed_teeth() const
{
    return m_number_plumbed_teeth;
}

void PatientData::setNumber_plumbed_teeth(unsigned int number_plumbed_teeth)
{
    m_number_plumbed_teeth = number_plumbed_teeth;
}

unsigned int PatientData::number_caries_teeth() const
{
    return m_number_caries_teeth;
}

void PatientData::setNumber_caries_teeth(unsigned int number_caries_teeth)
{
    m_number_caries_teeth = number_caries_teeth;
}


unsigned int PatientData::number_removed_teeth() const
{
    return m_number_removed_teeth;
}

void PatientData::setNumber_removed_teeth(unsigned int number_removed_teeth)
{
    m_number_removed_teeth = number_removed_teeth;
}

void PatientData::addSymtom(const QString sym)
{
    m_symptomList.append(sym);
    m_symptoms = true;
}

void PatientData::removeSymtom(const QString sym)
{
    m_symptomList.removeAll(sym);
    if (m_symptomList.count() == 0) m_symptoms = false;
}




