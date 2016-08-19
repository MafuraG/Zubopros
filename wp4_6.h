#ifndef WP4_6_H
#define WP4_6_H

#include <QWizardPage>

namespace Ui {
class Wp4_6;
}

class Wp4_6 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp4_6(QWidget *parent = 0);
    ~Wp4_6();

private:
    Ui::Wp4_6 *ui;
};

#endif // WP4_6_H
