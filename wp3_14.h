#ifndef WP3_14_H
#define WP3_14_H

#include <QWizardPage>

namespace Ui {
class Wp3_14;
}

class Wp3_14 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_14(QWidget *parent = 0);
    ~Wp3_14();

private:
    Ui::Wp3_14 *ui;
};

#endif // WP3_14_H
