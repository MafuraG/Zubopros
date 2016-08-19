#include "wp3_9.h"
#include "ui_wp3_9.h"

Wp3_9::Wp3_9(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_9)
{
    ui->setupUi(this);
}

Wp3_9::~Wp3_9()
{
    delete ui;
}
