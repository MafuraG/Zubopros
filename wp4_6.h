#ifndef WP4_6_H
#define WP4_6_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "navhelper.h"
#include "patienthistory.h"
#include <QCheckBox>
namespace Ui {
class Wp4_6;
}

class Wp4_6 : public QWizardPage,NavHelper
{
    Q_OBJECT

public:
    explicit Wp4_6(QWidget *parent = 0);
    ~Wp4_6();

    std::shared_ptr<PatientHistory> patientHistory();
    void setPatientHistory(std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    void setNextId(int value){next_id = value;}

private slots:
    void on_radioButton_38_clicked(bool checked);

    void on_checkBox_186_clicked(bool checked);

    void on_checkBox_187_clicked(bool checked);

    void on_checkBox_195_clicked(bool checked);

    void on_checkBox_188_clicked(bool checked);

    void on_checkBox_196_clicked(bool checked);

    void on_checkBox_189_clicked(bool checked);

    void on_checkBox_197_clicked(bool checked);

    void on_checkBox_191_clicked(bool checked);

    void on_checkBox_192_clicked(bool checked);

    void on_checkBox_193_clicked(bool checked);

    void on_checkBox_194_clicked(bool checked);

    void on_checkBox_98_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);

private:
    Ui::Wp4_6 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
    int next_id;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WP4_6_H
