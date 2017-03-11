#ifndef WP3_6_H
#define WP3_6_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_6;
}

class Wp3_6 : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_6 (QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_6();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_13_clicked(bool checked);

    void on_checkBox_4_clicked(bool checked);

    void on_checkBox_42_clicked(bool checked);

    void on_checkBox_43_clicked(bool checked);

    void on_checkBox_5_clicked(bool checked);

    void on_checkBox_44_clicked(bool checked);

    void on_checkBox_45_clicked(bool checked);

    void on_checkBox_6_clicked(bool checked);

    void on_checkBox_46_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp3_6 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;


    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_6_H
