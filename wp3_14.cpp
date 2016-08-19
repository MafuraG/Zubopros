#include "wp3_14.h"
#include "ui_wp3_14.h"

Wp3_14::Wp3_14(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_14)
{
    ui->setupUi(this);
}

Wp3_14::~Wp3_14()
{
    delete ui;
}
