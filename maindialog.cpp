#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);

    dz = new DentistWizard();
    nav = new NavForm();

    ui->horizontalLayout->addWidget(nav);
    ui->horizontalLayout->addWidget(dz);

}

MainDialog::~MainDialog()
{
    delete ui;
}
