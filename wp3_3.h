#ifndef WP3_3_H
#define WP3_3_H

#include <QWizardPage>

namespace Ui {
class Wp3_3;
}

class Wp3_3 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_3(QWidget *parent = 0);
    ~Wp3_3();

private:
    Ui::Wp3_3 *ui;
};

#endif // WP3_3_H
