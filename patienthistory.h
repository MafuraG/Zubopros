#ifndef PATIENTFILE_H
#define PATIENTFILE_H

#include "patientdata.h"

#include <QDate>
#include <QString>
#include <QHash>
#include <memory>
#include "pgglobalconstants.h"
#include "patientclass.h"

class PatientHistory
{
public:
    PatientHistory();   

    std::shared_ptr<QHash<int, std::shared_ptr<PatientData> > > patientInfo() const;
    void setPatientSymthomsList(int wp_page, bool checked,QString value);//simtomi
    void clearPatientSymthomList(int wp_page);
    void setPatientSymthoms(int wp_page,bool  value);//
    void setPatientFurtherInvestigation(int wp_page, bool value);

private:
    QString m_firstName;
    QString m_patronym;
    QString m_surname;

    uint m_age;
    QDate m_date;
    PatientClass::PatientClassEnum m_pclass;
    std::shared_ptr<QHash<int, std::shared_ptr<PatientData>>> m_patientInfo;
    void initPatientData();
    void initPatientInfo();

};



#endif // PATIENTFILE_H
