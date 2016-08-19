#ifndef WPPATIENTCLASS_H
#define WPPATIENTCLASS_H

#include <QWizardPage>

namespace Ui {
class WpPatientClass;
}

class WpPatientClass : public QWizardPage
{
    Q_OBJECT

public:
    explicit WpPatientClass(QWidget *parent = 0);
    ~WpPatientClass();

private:
    Ui::WpPatientClass *ui;
};

#endif // WPPATIENTCLASS_H
