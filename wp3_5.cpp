#include "wp3_5.h"
#include "ui_wp3_5.h"

Wp3_5::Wp3_5(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_5)
{
    ui->setupUi(this);
}

Wp3_5::~Wp3_5()
{
    delete ui;
}
