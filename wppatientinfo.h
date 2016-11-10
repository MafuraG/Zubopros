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
    explicit WpPatientInfo(QWidget *parent = 0);
    ~WpPatientInfo();

private:
    Ui::WpPatientInfo *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;   
    std::shared_ptr<PatientHistory> patientHistory();
    void setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory);
private slots:
    void on_lineEdit_editingFinished();
    void on_dateTimeEdit_editingFinished();
    void on_spinBox_editingFinished();
};

#endif // WPPATIENTINFO_H
