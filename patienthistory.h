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

    void setPatientClass(int wp_page, QString value);
<<<<<<< HEAD
    int nextpage() const;
    void setNextpage(int nextpage);

    bool navigate(){return m_navigate;}
    void setNavigate(bool value){ m_navigate = value;}

=======
    void diagnosis(QStringList &groupD2, QStringList &groupD3, QStringList &groupAllowed);
    QString fio() const;
    void setFio(const QString &fio);

    QDate date() const;
    void setDate(const QDate &date);

    uint age() const;
    void setAge(const uint &age);

    PatientClass::PatientClassEnum pclass() const;
    void setPclass(const PatientClass::PatientClassEnum &pclass);

    QString pclass_Str() const;
>>>>>>> origin/master
private:
    QString m_fio;

    uint m_age;
    QDate m_date;
    PatientClass::PatientClassEnum m_pclass;
<<<<<<< HEAD
    int m_nextpage;
    bool m_navigate = false;
    std::shared_ptr<QHash<int, std::shared_ptr<PatientData>>> m_patientInfo;    
=======
    std::shared_ptr<QHash<int, std::shared_ptr<PatientData>>> m_patientInfo;
>>>>>>> origin/master
    void initPatientData();
    void initPatientInfo();

};



#endif // PATIENTFILE_H
