#include "wp4_5.h"
#include "ui_wp4_5.h"

Wp4_5::Wp4_5(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::Wp4_5)
{
    ui->setupUi(this);
}

Wp4_5::~Wp4_5()
{
    delete ui;
}
