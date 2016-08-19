#include "wp3_13.h"
#include "ui_wp3_13.h"

Wp3_13::Wp3_13(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_13)
{
    ui->setupUi(this);
}

Wp3_13::~Wp3_13()
{
    delete ui;
}
