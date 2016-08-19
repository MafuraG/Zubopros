#include "wp3_10.h"
#include "ui_wp3_10.h"

Wp3_10::Wp3_10(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_10)
{
    ui->setupUi(this);
}

Wp3_10::~Wp3_10()
{
    delete ui;
}
