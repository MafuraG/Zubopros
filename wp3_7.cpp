#include "wp3_7.h"
#include "ui_wp3_7.h"

Wp3_7::Wp3_7(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_7)
{
    ui->setupUi(this);
}

Wp3_7::~Wp3_7()
{
    delete ui;
}
