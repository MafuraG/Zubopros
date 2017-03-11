#ifndef WPPATIENTINFO_H
#define WPPATIENTINFO_H

#include <QWizardPage>
#include <memory>
#include "pgglobalconstants.h"
#include "patienthistory.h"
#include "navhelper.h"

namespace Ui {
class WpPatientInfo;
}

class WpPatientInfo : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit WpPatientInfo(QWidget *parent = 0,
                           std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~WpPatientInfo();

private:
    Ui::WpPatientInfo *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:      
    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    void setNextId(int value){next_id = value;}

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WPPATIENTINFO_H
