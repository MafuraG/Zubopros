#ifndef WP3_1_H
#define WP3_1_H

#include "patientdata.h"
#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class Wp3_1;
}

class Wp3_1 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_1(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());

    ~Wp3_1();

private:
    Ui::Wp3_1 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;


    // QWizardPage interface
public:
    bool validatePage() Q_DECL_OVERRIDE;
    int nextId() const Q_DECL_OVERRIDE; 



    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
};

#endif // WP3_1_H
