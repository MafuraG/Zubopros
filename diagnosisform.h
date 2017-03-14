#ifndef DIAGNOSISFORM_H
#define DIAGNOSISFORM_H

#include <QDialog>

namespace Ui {
class DiagnosisForm;
}

class DiagnosisForm : public QDialog
{
    Q_OBJECT

public:
    explicit DiagnosisForm(QWidget *parent = 0);
    void setFIO(QString &fio);
    ~DiagnosisForm();

    QString diag_template() const;
    void setDiag_template(const QString &diag_template);

    void setPatientClass(QString &pclass);
    void setDiagnosis(QString &diagnosis);
    void setPatientGroup(QString group);
    void setDiagClasses(QString &classes);
    void setCheckupTimes(QString checkupTimes);
    void resetTemplate();
private:
    Ui::DiagnosisForm *ui;
    QString m_diag_template;
    void setValue(const QString &p, const QString &value);
};

#endif // DIAGNOSISFORM_H
