#ifndef WP3_5_H
#define WP3_5_H

#include <QWizardPage>

namespace Ui {
class Wp3_5;
}

class Wp3_5 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_5(QWidget *parent = 0);
    ~Wp3_5();

private:
    Ui::Wp3_5 *ui;
};

#endif // WP3_5_H
