#include "wp3_2.h"
#include "ui_wp3_2.h"

Wp3_2::Wp3_2(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_2)
{
    ui->setupUi(this);
}

Wp3_2::~Wp3_2()
{
    delete ui;
}
