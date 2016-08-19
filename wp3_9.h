#ifndef WP3_9_H
#define WP3_9_H

#include <QWizardPage>

namespace Ui {
class Wp3_9;
}

class Wp3_9 : public QWizardPage
{
    Q_OBJECT

public:
    explicit Wp3_9(QWidget *parent = 0);
    ~Wp3_9();

private:
    Ui::Wp3_9 *ui;
};

#endif // WP3_9_H
