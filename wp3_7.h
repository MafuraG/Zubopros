#ifndef WP3_7_H
#define WP3_7_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class Wp3_7;
}

class Wp3_7 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_7(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_7();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);

private:
    Ui::Wp3_7 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
};

#endif // WP3_7_H
