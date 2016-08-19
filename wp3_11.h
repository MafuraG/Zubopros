#ifndef WP3_11_H
#define WP3_11_H

#include <QWizardPage>

namespace Ui {
class Wp3_11;
}

class Wp3_11 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_11(QWidget *parent = 0);
    ~Wp3_11();

private:
    Ui::Wp3_11 *ui;
};

#endif // WP3_11_H
