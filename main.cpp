#include <graphics.hpp>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <widget.h>
#include <button.h>
#include <JatekMester.h>
using namespace genv;
using namespace std;
int X=860;
int Y=860;







int main()
{
    vector <button*> v;
    button* p;
    JatekMester* q;


for (int j=0;j<40;){
for (int i=0;i<40;i++){

p=new button(10+i*21,10+j*21,20,20);
if(i==39){
j+=1;
}
    v.push_back(p);

}
}
    event ev;
    gout.open(X,Y);
    gin.timer(1);



    while(gin>>ev &&ev.keycode!=key_escape)
    {
       q->torol();
        if (ev.type==ev_timer)
        {
for (int i=0;i<v.size();i++){
v[i]->rajz();
v[i]->work();
v[i]->focusf();
}
q->work(v);
 gout << refresh;
        }
if(ev.button==btn_left){
    for (int i=0;i<v.size();i++){
            v[i]->posx=ev.pos_x;
            v[i]->posy=ev.pos_y;
}
}
if(ev.keycode==key_enter){
        q->xnyert=false;
        q->onyert=false;
        for (int i=0;i<v.size();i++){v[i]->gombfelirat=" ";}
     }
}
}
