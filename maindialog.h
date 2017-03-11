#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include "dentistwizard.h"

#include <QDialog>

namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = 0);
    ~MainDialog();

private:
    Ui::MainDialog *ui;
    DentistWizard *dz;
    NavForm *nav;
};

#endif // MAINDIALOG_H
