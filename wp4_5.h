#ifndef WP4_5_H
#define WP4_5_H

#include <QWizardPage>

namespace Ui {
class Wp4_5;
}

class Wp4_5 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp4_5(QWidget *parent = 0);
    ~Wp4_5();

private:
    Ui::Wp4_5 *ui;
};

#endif // WP4_5_H
