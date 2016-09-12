#ifndef WP3_3_H
#define WP3_3_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include <QCheckBox>
#include "patienthistory.h"

namespace Ui {
class Wp3_3;
}

class Wp3_3 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_3(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_3();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;

private slots:
    void on_radioButton_40_clicked(bool checked);
    
    void on_checkBox_222_clicked(bool checked);
    
    void on_checkBox_221_clicked(bool checked);
    
    void on_checkBox_225_clicked(bool checked);
    
    void on_checkBox_229_clicked(bool checked);
    
    void on_checkBox_227_clicked(bool checked);
    
    void on_checkBox_223_clicked(bool checked);
    
    void on_checkBox_224_clicked(bool checked);
    
    void on_checkBox_228_clicked(bool checked);
    
    void on_checkBox_226_clicked(bool checked);

    void setCheckBoxEnabled(QCheckBox *chkbox , bool value);
    void enableCheckBoxes(bool value);
    
private:
    Ui::Wp3_3 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;

};

#endif // WP3_3_H
