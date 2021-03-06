#ifndef WP3_5_H
#define WP3_5_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_5;
}

class Wp3_5 : public QWizardPage, NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_5(QWidget *parent = 0);
    ~Wp3_5();

    std::shared_ptr<PatientHistory> patientHistory();
    void setPatientHistory( std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_12_clicked(bool checked);

    void on_checkBox_36_clicked(bool checked);

    void on_checkBox_37_clicked(bool checked);

    void on_checkBox_38_clicked(bool checked);

    void on_checkBox_39_clicked(bool checked);

    void on_checkBox_40_clicked(bool checked);

    void on_checkBox_41_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp3_5 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;


    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_5_H
