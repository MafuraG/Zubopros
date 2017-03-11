//#include "dentistwizard.h"
#include "maindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DentistWizard w;
    //NavForm nvm;

    w.show();
    //nvm.show();


    return a.exec();
}
