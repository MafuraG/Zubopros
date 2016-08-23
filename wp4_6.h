#ifndef WP4_6_H
#define WP4_6_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class Wp4_6;
}

class Wp4_6 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp4_6(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp4_6();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);

private:
    Ui::Wp4_6 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
};

#endif // WP4_6_H
