#ifndef WP3_2_H
#define WP3_2_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class Wp3_2;
}

class Wp3_2 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_2(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_2();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;
    
private slots:
    void on_checkBox_99_clicked(bool checked);



private slots:
    void on_radioButton_9_clicked(bool checked);
    
    void on_spinBox_2_valueChanged(int arg1);
    
    void on_spinBox_3_valueChanged(int arg1);
    
private:
    Ui::Wp3_2 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;

};

#endif // WP3_2_H
