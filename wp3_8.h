#ifndef WP3_8_H
#define WP3_8_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_8;
}

class Wp3_8 : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_8(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_8();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_14_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void on_checkBox_47_clicked(bool checked);

    void on_checkBox_48_clicked(bool checked);

    void on_checkBox_15_clicked(bool checked);

    void on_checkBox_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);
private:
    Ui::Wp3_8 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;


    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_8_H
