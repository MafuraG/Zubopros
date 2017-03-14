#ifndef WP3_13_H
#define WP3_13_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_13;
}

class Wp3_13 : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_13(QWidget *parent = 0);
    ~Wp3_13();

    std::shared_ptr<PatientHistory> patientHistory() ;
    void setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_20_clicked(bool checked);

    void on_checkBox_79_clicked(bool checked);

    void on_checkBox_80_clicked(bool checked);

    void on_checkBox_81_clicked(bool checked);

    void on_checkBox_82_clicked(bool checked);

    void on_checkBox_84_clicked(bool checked);

    void on_checkBox_83_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp3_13 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_13_H
