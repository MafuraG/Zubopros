#ifndef WP3_11_H
#define WP3_11_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_11;
}

class Wp3_11 : public QWizardPage, NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_11(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_11();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}
private slots:
    void on_radioButton_18_clicked(bool checked);

    void on_checkBox_70_clicked(bool checked);

    void on_checkBox_71_clicked(bool checked);

    void on_checkBox_72_clicked(bool checked);

    void on_checkBox_66_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp3_11 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;


    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_11_H
