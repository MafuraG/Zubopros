#ifndef WP3_10_H
#define WP3_10_H

#include <QWizardPage>

namespace Ui {
class Wp3_10;
}

class Wp3_10 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_10(QWidget *parent = 0);
    ~Wp3_10();

private:
    Ui::Wp3_10 *ui;
};

#endif // WP3_10_H
