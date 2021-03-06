#ifndef WP3_12_H
#define WP3_12_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_12;
}

class Wp3_12 : public QWizardPage, NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_12(QWidget *parent = 0);
    ~Wp3_12();

    std::shared_ptr<PatientHistory> patientHistory();
    void setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_19_clicked(bool checked);

    void on_checkBox_74_clicked(bool checked);

    void on_checkBox_75_clicked(bool checked);

    void on_checkBox_76_clicked(bool checked);

    void on_checkBox_77_clicked(bool checked);

    void on_checkBox_78_clicked(bool checked);

    void on_checkBox_73_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp3_12 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_12_H
