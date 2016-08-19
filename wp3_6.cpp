#include "wp3_6.h"
#include "ui_wp3_6.h"

Wp3_6::Wp3_6(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_6)
{
    ui->setupUi(this);
}

Wp3_6::~Wp3_6()
{
    delete ui;
}
