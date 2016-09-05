#ifndef WP4_6_H
#define WP4_6_H

#include "patientwizardpage.h"
#include <memory>
#include <QWizardPage>
#include "patienthistory.h"

namespace Ui {
class Wp4_6;
}

class Wp4_6 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp4_6(QWidget *parent = 0,
                   std::shared_ptr<PatientHistory> patientHistory = std::make_shared<PatientHistory>());
    ~Wp4_6();

    std::shared_ptr<PatientHistory> patientHistory() const;
    void setPatientHistory(const std::shared_ptr<PatientHistory> &patientHistory);
    static QString Patient_Class;

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

private:
    Ui::Wp4_6 *ui;
    std::shared_ptr<PatientHistory> m_patientHistory;
};

#endif // WP4_6_H
