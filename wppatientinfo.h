#ifndef WPPATIENTINFO_H
#define WPPATIENTINFO_H

#include <QWizardPage>
#include <memory>
#include "pgglobalconstants.h"
#include "patienthistory.h"

namespace Ui {
class WpPatientInfo;
}

class WpPatientInfo : public QWizardPage
{
    Q_OBJECT

public:
    explicit WpPatientInfo(QWidget *parent = 0,
                           std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~WpPatientInfo();

private:
    Ui::WpPatientInfo *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;   
    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
};

#endif // WPPATIENTINFO_H
