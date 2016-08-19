#ifndef WP3_1_H
#define WP3_1_H

#include <QWizardPage>

namespace Ui {
class Wp3_1;
}

class Wp3_1 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_1(QWidget *parent = 0);
    ~Wp3_1();

private:
    Ui::Wp3_1 *ui;
};

#endif // WP3_1_H
