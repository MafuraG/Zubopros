#ifndef WP3_4_H
#define WP3_4_H

#include <QWizardPage>

namespace Ui {
class Wp3_4;
}

class Wp3_4 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_4(QWidget *parent = 0);
    ~Wp3_4();

private:
    Ui::Wp3_4 *ui;
};

#endif // WP3_4_H
