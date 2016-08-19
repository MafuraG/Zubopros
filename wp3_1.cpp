#include "wp3_1.h"
#include "ui_wp3_1.h"

Wp3_1::Wp3_1(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_1)
{
    ui->setupUi(this);
}

Wp3_1::~Wp3_1()
{
    delete ui;
}
