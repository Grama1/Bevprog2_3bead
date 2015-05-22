#include "button.h"
#include <graphics.hpp>
#include <sstream>
#include <iostream>
using namespace genv;

button::button(int a, int b, int c, int d) : widget (a,b,c,d)

{

    //ctor
}

button::~button()
{
    //dtor
}

void button::rajz (){

gout << move_to(x,y) << color (200,200,200) << box (px,py);
    gout << move_to(x+7,y+15) << color(0,0,0) << text(gombfelirat);





}

void button::focusf(){
if(focus==true){
             gout << move_to(x-20,y+10) << color (255,0,0) << box (10,10);
    }

}
   void button::work1 (){

mehete=false;
    if(posx>x && posx<x+px && posy>y && posy<y+py ){
mehete=true;
        posx=0;
posy=0;


    }


   }



