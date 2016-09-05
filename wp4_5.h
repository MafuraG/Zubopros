#ifndef WP4_5_H
#define WP4_5_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class Wp4_5;
}

class Wp4_5 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp4_5(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp4_5();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;

private slots:
    void on_radioButton_22_clicked(bool checked);

    void on_checkBox_89_clicked(bool checked);

    void on_checkBox_90_clicked(bool checked);

    void on_checkBox_91_clicked(bool checked);

    void on_checkBox_92_clicked(bool checked);

    void on_checkBox_93_clicked(bool checked);

    void on_checkBox_94_clicked(bool checked);

    void on_checkBox_95_clicked(bool checked);

    void on_checkBox_96_clicked(bool checked);

    void on_checkBox_97_clicked(bool checked);

    void on_checkBox_88_clicked(bool checked);

private:
    Ui::Wp4_5 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
};

#endif // WP4_5_H
