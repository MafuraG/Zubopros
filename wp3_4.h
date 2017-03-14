#ifndef WP3_4_H
#define WP3_4_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_4;
}

class Wp3_4 : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_4(QWidget *parent = 0);
    ~Wp3_4();

    std::shared_ptr<PatientHistory> patientHistory();
    void setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_8_clicked(bool checked);

    void on_checkBox_31_clicked(bool checked);

    void on_checkBox_32_clicked(bool checked);

    void on_checkBox_33_clicked(bool checked);

    void on_checkBox_34_clicked(bool checked);

    void on_checkBox_35_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp3_4 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_4_H
