#include "navhelper.h"
#include <QDebug>

NavHelper::NavHelper()
{

}

NavHelper::~NavHelper()
{

}
int NavHelper::nextIDNav() const
{
    //setNavigate(false);
    return _nextIDNav;
}

void NavHelper::setNextIDNav(int nextIDNav)
{
    _nextIDNav = nextIDNav;
}
bool NavHelper::navigate() const
{
    qDebug()<<"navigate() called";
    return _navigate;
}

void NavHelper::setNavigate(bool navigate)
{
    _navigate = navigate;
}





