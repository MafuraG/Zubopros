#include "wp3_4.h"
#include "ui_wp3_4.h"

Wp3_4::Wp3_4(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_4)
{
    ui->setupUi(this);
}

Wp3_4::~Wp3_4()
{
    delete ui;
}
