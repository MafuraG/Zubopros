#ifndef PATIENTWIZARDPAGE_H
#define PATIENTWIZARDPAGE_H

#include "patientdata.h"
#include "patienthistory.h"

#include <memory>

class PatientWizardPage
{
    //Q_OBJECT
public:
    PatientWizardPage();
    std::shared_ptr<PatientHistory> pageHistory() const;
    void setPageHistory(std::shared_ptr<PatientHistory> &pageHistory);


private:
    std::shared_ptr<PatientHistory> m_pageHistory;    
};

#endif // PATIENTWIZARDPAGE_H
