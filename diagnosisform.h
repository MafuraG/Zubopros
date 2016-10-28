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
    ~DiagnosisForm();

private:
    Ui::DiagnosisForm *ui;
};

#endif // DIAGNOSISFORM_H
