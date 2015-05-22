#ifndef WIDGET_H
#define WIDGET_H
#include <string>
#include <iostream>

struct widget
{

    double x,y,px,py,posx,posy;
    bool focus;
    widget(int a, int b, int c, int d);
    virtual ~widget();
    virtual void work ();
    virtual void rajz ();
    virtual void focusf ();

};

#endif // WIDGET_H
