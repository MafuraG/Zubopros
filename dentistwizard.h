#ifndef DENTISTWIZARD_H
#define DENTISTWIZARD_H

#include "patienthistory.h"

#include <QWizard>
#include <memory>


class DentistWizard: public QWizard
{
public:    
    DentistWizard(QWidget *parent = 0);
private:
    std::shared_ptr<PatientHistory> m_patientHistory;
//    void setPatientHistory(unsigned int pageId);
};

#endif // DENTISTWIZARD_H
