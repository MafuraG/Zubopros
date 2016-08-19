#ifndef WP3_7_H
#define WP3_7_H

#include <QWizardPage>

namespace Ui {
class Wp3_7;
}

class Wp3_7 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_7(QWidget *parent = 0);
    ~Wp3_7();

private:
    Ui::Wp3_7 *ui;
};

#endif // WP3_7_H
