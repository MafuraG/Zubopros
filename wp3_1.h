#ifndef WP3_1_H
#define WP3_1_H

#include "navhelper.h"
#include "patientdata.h"
#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include <QCheckBox>
#include "patienthistory.h"

namespace Ui {
class Wp3_1;
}

class Wp3_1 : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_1(QWidget *parent = 0);

    ~Wp3_1();
    static QString Patient_Class;

private:
    Ui::Wp3_1 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    bool validatePage() Q_DECL_OVERRIDE;
    int nextId() const Q_DECL_OVERRIDE;
    //void setNextId(int value){next_id = value;}



    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
private slots:
    void on_checkBox_16_clicked(bool checked);
    void on_checkBox_17_clicked(bool checked);
    void on_checkBox_18_clicked(bool checked);
    void on_checkBox_19_clicked(bool checked);
    void on_checkBox_20_clicked(bool checked);
    void on_checkBox_21_clicked(bool checked);
    void on_radioButton_7_clicked(bool checked);
    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);
};

#endif // WP3_1_H
