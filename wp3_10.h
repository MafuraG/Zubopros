#ifndef WP3_10_H
#define WP3_10_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"
namespace Ui {
class Wp3_10;
}

class Wp3_10 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_10(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp3_10();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class ;

private slots:
    void on_radioButton_17_clicked(bool checked);

    void on_checkBox_63_clicked(bool checked);

    void on_checkBox_64_clicked(bool checked);

    void on_checkBox_65_clicked(bool checked);

    void on_checkBox_69_clicked(bool checked);

    void on_checkBox_67_clicked(bool checked);

    void on_checkBox_68_clicked(bool checked);

    void on_checkBox_62_clicked(bool checked);

private:
    Ui::Wp3_10 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;

};

#endif // WP3_10_H
