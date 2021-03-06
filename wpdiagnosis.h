#ifndef WPDIAGNOSIS_H
#define WPDIAGNOSIS_H

#include <QWizardPage>
#include "diagnosisform.h"
#include "navhelper.h"
#include "patienthistory.h"
#include <memory>

namespace Ui {
class WpDiagnosis;
}

class WpDiagnosis : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit WpDiagnosis(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    //explicit WpDiagnosis(QWidget *parent = 0);
    ~WpDiagnosis();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    void setNextId(int value){next_id = value;}

private slots:
    void on_diagnosisButton_clicked();

private:
    Ui::WpDiagnosis *ui;
    DiagnosisForm *dform;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WPDIAGNOSIS_H
