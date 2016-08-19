#ifndef PATIENTDATA_H
#define PATIENTDATA_H

#include <QStringList>
#include <QString>



class PatientData
{
public:
    PatientData();
    ~PatientData();

    QStringList symptomList() const;
    void setSymptomList(const QStringList &symptomList);

    QString patientClass() const;
    void setPatientClass(const QString &patientClass);

    QString title() const;
    void setTitle(const QString &title);   

    bool furtherInvestigation() const;
    void setFurtherInvestigation(bool furtherInvestigation);

    bool symptoms() const;
    void setSymptoms(bool symptoms);

private:
    QStringList m_symptomList; //симптомы у пациентов
    bool m_furtherInvestigation; //Нужен ли еще исследование?
    bool m_symptoms ; //Есть симптомы или нет?
    QString m_patientClass;//КО1, КО2, КО3
    QString m_title;
};

#endif // PATIENTDATA_H
