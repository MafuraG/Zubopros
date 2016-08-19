#ifndef WP3_13_H
#define WP3_13_H

#include <QWizardPage>

namespace Ui {
class Wp3_13;
}

class Wp3_13 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_13(QWidget *parent = 0);
    ~Wp3_13();

private:
    Ui::Wp3_13 *ui;
};

#endif // WP3_13_H
