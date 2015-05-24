#include "button.h"
#include <graphics.hpp>
#include <sstream>
#include <iostream>
using namespace genv;

button::button(int a, int b, int c, int d) : widget (a,b,c,d)

{
megnyomtak=false;
gombfelirat=" ";
    //ctor
}

button::~button()
{
    //dtor
}

void button::rajz (){

gout << move_to(x,y) << color (200,200,200) << box (px,py);
if (gombfelirat=="O"){
    gout << move_to(x,y) << color (255,0,0) << box (px,py);
gout << move_to(x+7,y+15) << color(255,255,255) << text(gombfelirat);
}


   if (gombfelirat=="X"){

    gout << move_to(x,y) << color (0,0,255) << box (px,py);
gout << move_to(x+7,y+15) << color(255,255,255) << text(gombfelirat);





   }
}

void button::focusf(){
if(focus==true){
             gout << move_to(x-20,y+10) << color (255,0,0) << box (10,10);
    }

}
   void button::work (){

if(posx>x && posx<px+x && posy>y && posy<py+y){

        megnyomtak=true;


posx=0;
posy=0;



}


    }






