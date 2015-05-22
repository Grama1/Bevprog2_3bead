#ifndef BUTTON_H
#define BUTTON_H
#include <widget.h>
#include <string>
#include <iostream>

struct button : public widget
{

std ::    string gombfelirat;
bool megnyomtak;
    button(int a,int b, int c, int d);
    virtual ~button ();
    void rajz();
    void focusf();
    void work ();
};

#endif // BUTTON_H
