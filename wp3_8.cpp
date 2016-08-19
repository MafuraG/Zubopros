#include "wp3_8.h"
#include "ui_wp3_8.h"

Wp3_8::Wp3_8(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_8)
{
    ui->setupUi(this);
}

Wp3_8::~Wp3_8()
{
    delete ui;
}
