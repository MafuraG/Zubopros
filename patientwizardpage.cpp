#include "patientwizardpage.h"
#include <QDebug>

PatientWizardPage::PatientWizardPage()
{
    qDebug()<<"Patient wizard constructor called";
}

std::shared_ptr<PatientHistory> PatientWizardPage::pageHistory() const
{
    return m_pageHistory;
}

void PatientWizardPage::setPageHistory(std::shared_ptr<PatientHistory> &pageHistory)
{
    m_pageHistory = pageHistory;
}


