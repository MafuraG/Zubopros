#include "navform.h"
#include "treeitem.h"
#include "ui_navform.h"

#include <QFile>

NavForm::NavForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NavForm)
{
    ui->setupUi(this);

    QFile file(":/default.txt");
    file.open(QIODevice::ReadOnly);
    nvmodel = new TreeModel(file.readAll());
    file.close();

    ui->treeView->setModel(nvmodel);

    ui->treeView->setColumnWidth(0,200);
    ui->treeView->setColumnHidden(1,true);
}

NavForm::~NavForm()
{
    delete ui;
}

void NavForm::on_treeView_clicked(const QModelIndex &index)
{
    TreeItem *item = static_cast<TreeItem*>(index.internalPointer());;
    QVariant id_var = item->data(1);
    emit choosenCurrentPage(id_var.toInt());
}
