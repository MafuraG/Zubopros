#ifndef WP3_8_H
#define WP3_8_H

#include <QWizardPage>

namespace Ui {
class Wp3_8;
}

class Wp3_8 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_8(QWidget *parent = 0);
    ~Wp3_8();

private:
    Ui::Wp3_8 *ui;
};

#endif // WP3_8_H
