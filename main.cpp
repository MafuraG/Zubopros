#include "dentistwizard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DentistWizard w;
    w.show();

    return a.exec();
}
