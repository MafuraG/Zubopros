#ifndef NAVFORM_H
#define NAVFORM_H

#include "treemodel.h"

#include <QDialog>

namespace Ui {
class NavForm;
}

class NavForm : public QDialog
{
    Q_OBJECT

public:
    explicit NavForm(QWidget *parent = 0);
    ~NavForm();
signals:
    void choosenCurrentPage(int page);
private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::NavForm *ui;
    TreeModel *nvmodel;
};

#endif // NAVFORM_H
