#ifndef WP3_14_H
#define WP3_14_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_14;
}

class Wp3_14 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_14(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_14();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;

private slots:
    void on_radioButton_21_clicked(bool checked);

    void on_checkBox_7_clicked(bool checked);

    void on_checkBox_8_clicked(bool checked);

    void on_checkBox_86_clicked(bool checked);

    void on_checkBox_87_clicked(bool checked);

    void on_checkBox_9_clicked(bool checked);

    void on_checkBox_10_clicked(bool checked);

    void on_checkBox_13_clicked(bool checked);

    void on_checkBox_12_clicked(bool checked);

    void on_checkBox_14_clicked(bool checked);

    void on_checkBox_11_clicked(bool checked);

    void on_checkBox_85_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp3_14 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;

};

#endif // WP3_14_H
