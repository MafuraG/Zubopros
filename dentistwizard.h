#ifndef DENTISTWIZARD_H
#define DENTISTWIZARD_H

#include "navform.h"
#include "patienthistory.h"

#include <QWizard>
#include <memory>


class DentistWizard: public QWizard
{
public:    
    DentistWizard(QWidget *parent = 0);
public slots:
    void setCurrentPage(int page);


private:
    std::shared_ptr<PatientHistory> m_patientHistory;
    NavForm *navForm;
//    void setPatientHistory(unsigned int pageId);
};

#endif // DENTISTWIZARD_H
