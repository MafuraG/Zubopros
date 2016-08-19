#include "wp3_11.h"
#include "ui_wp3_11.h"

Wp3_11::Wp3_11(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp3_11)
{
    ui->setupUi(this);
}

Wp3_11::~Wp3_11()
{
    delete ui;
}
