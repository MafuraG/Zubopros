#ifndef WP3_13_H
#define WP3_13_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class Wp3_13;
}

class Wp3_13 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_13(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_13();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;

private slots:
    void on_radioButton_20_clicked(bool checked);

    void on_checkBox_79_clicked(bool checked);

    void on_checkBox_80_clicked(bool checked);

    void on_checkBox_81_clicked(bool checked);

    void on_checkBox_82_clicked(bool checked);

    void on_checkBox_84_clicked(bool checked);

    void on_checkBox_83_clicked(bool checked);

private:
    Ui::Wp3_13 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
};

#endif // WP3_13_H
