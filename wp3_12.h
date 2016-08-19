#ifndef WP3_12_H
#define WP3_12_H

#include <QWizardPage>

namespace Ui {
class Wp3_12;
}

class Wp3_12 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_12(QWidget *parent = 0);
    ~Wp3_12();

private:
    Ui::Wp3_12 *ui;
};

#endif // WP3_12_H
