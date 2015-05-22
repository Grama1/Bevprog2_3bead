#include "widget.h"
# include <graphics.hpp>
#include <string>

widget::widget(int a, int b, int c, int d)
{
    x=a;
    y=b;
    px=c;
    py=d;
    posx=0;
    posy=0;
    focus=false;

    //ctor
}

widget::~widget()
{
    //dtor
}
void widget:: rajz () {};
void widget:: work () {};
void widget:: focusf () {};


