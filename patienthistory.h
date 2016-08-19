#ifndef PATIENTFILE_H
#define PATIENTFILE_H

#include <QDate>
#include <QString>

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
};



#endif // PATIENTFILE_H
