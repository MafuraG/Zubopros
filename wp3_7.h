#ifndef WP3_7_H
#define WP3_7_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_7;
}

class Wp3_7 : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_7(QWidget *parent = 0);
    ~Wp3_7();

    std::shared_ptr<PatientHistory> patientHistory() ;
    void setPatientHistory( std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_14_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void on_checkBox_15_clicked(bool checked);

    void on_checkBox_47_clicked(bool checked);

    void on_checkBox_48_clicked(bool checked);

    void on_checkBox_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp3_7 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_7_H
