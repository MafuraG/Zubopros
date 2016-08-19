#include "wp3_3.h"
#include "ui_wp3_3.h"

Wp3_3::Wp3_3(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_3)
{
    ui->setupUi(this);
}

Wp3_3::~Wp3_3()
{
    delete ui;
}
