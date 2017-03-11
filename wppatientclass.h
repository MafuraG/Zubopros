#ifndef WPPATIENTCLASS_H
#define WPPATIENTCLASS_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"

namespace Ui {
class WpPatientClass;
}

class WpPatientClass : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit WpPatientClass(QWidget *parent = 0,
                            std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~WpPatientClass();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    void setNextId(int value){next_id = value;}

private:
    Ui::WpPatientClass *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WPPATIENTCLASS_H
