#ifndef WP3_9_H
#define WP3_9_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp3_9;
}

class Wp3_9 : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit Wp3_9(QWidget *parent = 0);
    ~Wp3_9();

    std::shared_ptr<PatientHistory> patientHistory();
    void setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_16_clicked(bool checked);

    void on_checkBox_53_clicked(bool checked);

    void on_checkBox_58_clicked(bool checked);

    void on_checkBox_59_clicked(bool checked);

    void on_checkBox_60_clicked(bool checked);

    void on_checkBox_61_clicked(bool checked);

    void on_checkBox_52_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);
private:
    Ui::Wp3_9 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP3_9_H
