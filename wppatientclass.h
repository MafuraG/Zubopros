#ifndef WPPATIENTCLASS_H
#define WPPATIENTCLASS_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class WpPatientClass;
}

class WpPatientClass : public QWizardPage
{
    Q_OBJECT

public:
    explicit WpPatientClass(QWidget *parent = 0,
                            std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~WpPatientClass();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);

private:
    Ui::WpPatientClass *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
};

#endif // WPPATIENTCLASS_H
