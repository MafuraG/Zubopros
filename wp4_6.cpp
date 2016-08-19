#include "wp4_6.h"
#include "ui_wp4_6.h"

Wp4_6::Wp4_6(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp4_6)
{
    ui->setupUi(this);
}

Wp4_6::~Wp4_6()
{
    delete ui;
}
