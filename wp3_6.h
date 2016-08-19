#ifndef WP3_6_H
#define WP3_6_H

#include <QWizardPage>

namespace Ui {
class Wp3_6;
}

class Wp3_6 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_6(QWidget *parent = 0);
    ~Wp3_6();

private:
    Ui::Wp3_6 *ui;
};

#endif // WP3_6_H
