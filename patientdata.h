#ifndef PATIENTDATA_H
#define PATIENTDATA_H

#include <QStringList>
#include <QString>



class PatientData
{
public:
    PatientData();
    ~PatientData();

    QStringList symptomList(); //список симптомов где поставлена голочка
    void setSymptomList(const QStringList &symptomList);    

    QString patientClass() const;
    void setPatientClass(const QString &patientClass);

    QString title() const; //заголовок на каждой странице
    void setTitle(const QString &title);   

    bool furtherInvestigation() const;//голочка Требуются дополнительные исследования
    void setFurtherInvestigation(bool furtherInvestigation);

    bool symptoms() const;//голочка есть симптомы
    void setSymptoms(bool symptoms);

    unsigned int number_plumbed_teeth() const;
    void setNumber_plumbed_teeth(unsigned int number_plumbed_teeth);

    unsigned int number_caries_teeth() const;
    void setNumber_caries_teeth(unsigned int number_caries_teeth);

    unsigned int number_removed_teeth() const;
    void setNumber_removed_teeth(unsigned int number_removed_teeth);

    void addSymtom(const QString sym);
    void removeSymtom(const QString sym);
private:
    QStringList m_symptomList; //симптомы у пациентов
    bool m_furtherInvestigation = false; //Нужен ли еще исследование?
    bool m_symptoms = false ; //Есть симптомы или нет?
    QString m_patientClass;//КО1, КО2, КО3
    QString m_title;
    unsigned int m_number_plumbed_teeth = 0;
    unsigned int m_number_caries_teeth = 0;
    unsigned int m_number_removed_teeth = 0;
};

#endif // PATIENTDATA_H
