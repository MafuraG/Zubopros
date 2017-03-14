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
    explicit WpPatientClass(QWidget *parent = 0);
    ~WpPatientClass();

    std::shared_ptr<PatientHistory> patientHistory();
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_radioButton_3_clicked(bool checked);

    void on_radioButton_4_clicked(bool checked);

    void on_radioButton_5_clicked(bool checked);

    void on_radioButton_23_clicked(bool checked);

    void on_radioButton_6_clicked(bool checked);

private:
    Ui::WpPatientClass *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WPPATIENTCLASS_H
