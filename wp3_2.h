#ifndef WP3_2_H
#define WP3_2_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
#include <QSpinBox>

namespace Ui {
class Wp3_2;
}

class Wp3_2 : public QWizardPage, NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_2(QWidget *parent = 0);
    ~Wp3_2();

    std::shared_ptr<PatientHistory> patientHistory();
    void setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}
    
private slots:
    void on_checkBox_99_clicked(bool checked);



private slots:
    void on_radioButton_9_clicked(bool checked);
    
    void on_spinBox_2_valueChanged(int arg1);
    
    void on_spinBox_3_valueChanged(int arg1);
    
    void on_spinBox_4_valueChanged(int arg1);

    void setSpinBoxEnabled(QSpinBox *spinbox , bool value);
    void enableSpinBoxes(bool value);

private:
    Ui::Wp3_2 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;


    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_2_H
