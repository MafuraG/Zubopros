#ifndef WP3_2_H
#define WP3_2_H

#include <QWizardPage>

namespace Ui {
class Wp3_2;
}

class Wp3_2 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_2(QWidget *parent = 0);
    ~Wp3_2();

private:
    Ui::Wp3_2 *ui;
};

#endif // WP3_2_H
