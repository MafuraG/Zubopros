#ifndef WPPATIENTINFO_H
#define WPPATIENTINFO_H

#include <QWizardPage>

namespace Ui {
class WpPatientInfo;
}

class WpPatientInfo : public QWizardPage
{
    Q_OBJECT

public:
    explicit WpPatientInfo(QWidget *parent = 0);
    ~WpPatientInfo();

private:
    Ui::WpPatientInfo *ui;

    // QWizardPage interface
public:
    int nextId() const Q_DECL_OVERRIDE;
};

#endif // WPPATIENTINFO_H
