#include "wp3_12.h"
#include "ui_wp3_12.h"

Wp3_12::Wp3_12(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_12)
{
    ui->setupUi(this);
}

Wp3_12::~Wp3_12()
{
    delete ui;
}
