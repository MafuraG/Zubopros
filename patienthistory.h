#ifndef PATIENTFILE_H
#define PATIENTFILE_H

#include "patientdata.h"

#include <QDate>
#include <QString>
#include <QHash>
#include <memory>

class PatientHistory
{
public:
    PatientHistory();

private:
    QString m_firstName;
    QString m_patronym;
    QString m_surname;

    uint m_age;
    QDate m_date;
    QHash<int, std::shared_ptr<PatientData>> m_patientInfo;

};



#endif // PATIENTFILE_H
