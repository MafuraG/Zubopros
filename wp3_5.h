#ifndef WP3_5_H
#define WP3_5_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class Wp3_5;
}

class Wp3_5 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_5(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_5();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);

private:
    Ui::Wp3_5 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;

};

#endif // WP3_5_H
