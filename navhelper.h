#ifndef NAVHELPER_H
#define NAVHELPER_H


class NavHelper
{
public:
    NavHelper();
    ~NavHelper();
    int nextIDNav() const;
    void setNextIDNav(int nextIDNav);

    bool navigate() const;
    void setNavigate(bool navigate);

private:
    int _nextIDNav = -99;
    bool _navigate = false;
};

#endif // NAVHELPER_H
