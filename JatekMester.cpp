#include "JatekMester.h"
using namespace genv;
JatekMester::JatekMester()
{
    sorsz=1;
    xnyert=false;
    onyert=false;
    //ctor
}

JatekMester::~JatekMester()
{
    //dtor
}



void JatekMester::work (std ::vector <button*> &v)
 {
for (int i=0;i<v.size();i++){
    if(v[i]->megnyomtak==true && xjon==true && v[i]->gombfelirat!="X" && v[i]->gombfelirat!="O" ){
        v[i]->gombfelirat="X";
        v[i]->megnyomtak=false;
        xjon=false;
    }

    if(v[i]->megnyomtak==true && xjon==false && v[i]->gombfelirat!="X" && v[i]->gombfelirat!="O"){
        v[i]->gombfelirat="O";
        v[i]->megnyomtak=false;
        xjon=true;
    }


}
// viszintes keres�s
for (int i=0;i<v.size()-4;i++){

    if(v[i]->gombfelirat=="X" && v[i+1]->gombfelirat=="X" && v[i+2]->gombfelirat=="X" && v[i+3]->gombfelirat=="X" && v[i+4]->gombfelirat=="X")
    {
        xnyert=true;
        gout << move_to(v[i]->x,v[i]->y+v[i]->py/2) << color (255,255,255) << line_to (v[i+4]->px+v[i+4]->x,v[i+4]->py/2+v[i+4]->y);
    }
    if(v[i]->gombfelirat=="O" && v[i+1]->gombfelirat=="O" && v[i+2]->gombfelirat=="O" && v[i+3]->gombfelirat=="O" && v[i+4]->gombfelirat=="O")
    {
        onyert=true;
        gout << move_to(v[i]->x,v[i]->y+v[i]->py/2) << color (255,255,255) << line_to (v[i+4]->px+v[i+4]->x,v[i+4]->py/2+v[i+4]->y);
    }

if (i==35+(sorsz-1)*40)
{
    i=40+(sorsz-1)*40;
    sorsz+=1;
}
    }
    sorsz=1;
    //fuggoleges kereses
    for (int i=0;i<40;i++){
for (int j=0;j<36;j++){

    if(v[i+40*j]->gombfelirat=="X" && v[i+40*j+40]->gombfelirat=="X" && v[i+40*j+80]->gombfelirat=="X" && v[i+40*j+120]->gombfelirat=="X" && v[i+40*j+160]->gombfelirat=="X")
    {
        xnyert=true;
        gout << move_to(v[i+40*j]->x+v[i+40*j]->px/2,v[i+40*j]->y) << color (255,255,255) << line_to (v[i+40*j+160]->px/2+v[i+40*j+160]->x,v[i+40*j+160]->y+v[i+40*j+160]->py);
    }
    if(v[i+40*j]->gombfelirat=="O" && v[i+40*j+40]->gombfelirat=="O" && v[i+40*j+80]->gombfelirat=="O" && v[i+40*j+120]->gombfelirat=="O" && v[i+40*j+160]->gombfelirat=="O")
    {
        onyert=true;
        gout << move_to(v[i+40*j]->x+v[i+40*j]->px/2,v[i+40*j]->y) << color (255,255,255) << line_to (v[i+40*j+160]->px/2+v[i+40*j+160]->x,v[i+40*j+160]->y+v[i+40*j+160]->py);
    }
}

    }
    // backslash iranyban �tl�s keres�s a f��tl�t�l balra
    aktualissor=36;
for (int i=0;i<36;i++)

    {

    for (int j=0;j<aktualissor;j++){
if(v[i*40+j*41]->gombfelirat=="X" && v[(i*40)+(j+1)*41]->gombfelirat=="X" && v[i*40+(j+2)*41]->gombfelirat=="X" && v[i*40+(j+3)*41]->gombfelirat=="X" && v[i*40+(j+4)*41]->gombfelirat=="X"){

gout << move_to(v[i*40+j*41]->x,v[i*40+j*41]->y) << color (255,255,255) << line_to(v[i*40+(j+4)*41]->x+v[i*40+(j+4)*41]->px,v[i*40+(j+4)*41]->y+v[i*40+(j+4)*41]->py);
xnyert=true;
}
if(v[i*40+j*41]->gombfelirat=="O" && v[(i*40)+(j+1)*41]->gombfelirat=="O" && v[i*40+(j+2)*41]->gombfelirat=="O" && v[i*40+(j+3)*41]->gombfelirat=="O" && v[i*40+(j+4)*41]->gombfelirat=="O"){

gout << move_to(v[i*40+j*41]->x,v[i*40+j*41]->y) << color (255,255,255) << line_to(v[i*40+(j+4)*41]->x+v[i*40+(j+4)*41]->px,v[i*40+(j+4)*41]->y+v[i*40+(j+4)*41]->py);
onyert=true;
}

    }

aktualissor-=1;
    }

     // backslash iranyban �tl�s keres�s a f��tl�t�l jobbra
     aktualissor=36;
for (int i=0;i<36;i++)

    {

    for (int j=0;j<aktualissor;j++){
if(v[i+j*41]->gombfelirat=="X" && v[i+(j+1)*41]->gombfelirat=="X" && v[i+(j+2)*41]->gombfelirat=="X" && v[i+(j+3)*41]->gombfelirat=="X" && v[i+(j+4)*41]->gombfelirat=="X"){

gout << move_to(v[i+j*41]->x,v[i+j*41]->y) << color (255,255,255) << line_to(v[i+(j+4)*41]->x+v[i+(j+4)*41]->px,v[i+(j+4)*41]->y+v[i+(j+4)*41]->py);
xnyert=true;
}
if(v[i+j*41]->gombfelirat=="O" && v[i+(j+1)*41]->gombfelirat=="O" && v[i+(j+2)*41]->gombfelirat=="O" && v[i+(j+3)*41]->gombfelirat=="O" && v[i+(j+4)*41]->gombfelirat=="O"){

gout << move_to(v[i+j*41]->x,v[i+j*41]->y) << color (255,255,255) << line_to(v[i+(j+4)*41]->x+v[i+(j+4)*41]->px,v[i+(j+4)*41]->y+v[i+(j+4)*41]->py);
onyert=true;
}

    }

aktualissor-=1;
    }
// forwardslash iranyban �tl�s keres�s a f��tl�t�l balra
     aktualissor=4;
for (int i=4;i<40;i++)

    {

    for (int j=0;j<aktualissor;j++){
if(v[i+j*39]->gombfelirat=="X" && v[i+(j+1)*39]->gombfelirat=="X" && v[i+(j+2)*39]->gombfelirat=="X" && v[i+(j+3)*39]->gombfelirat=="X" && v[i+(j+4)*39]->gombfelirat=="X"){

gout << move_to(v[i+j*39]->x+v[i+j*39]->px,v[i+j*39]->y) << color (255,255,255) << line_to(v[i+(j+4)*39]->x,v[i+(j+4)*39]->y+v[i+(j+4)*39]->py);
xnyert=true;
}
if(v[i+j*39]->gombfelirat=="O" && v[i+(j+1)*39]->gombfelirat=="O" && v[i+(j+2)*39]->gombfelirat=="O" && v[i+(j+3)*39]->gombfelirat=="O" && v[i+(j+4)*39]->gombfelirat=="O"){

gout << move_to(v[i+j*39]->x+v[i+j*39]->px,v[i+j*39]->y) << color (255,255,255) << line_to(v[i+(j+4)*39]->x,v[i+(j+4)*39]->y+v[i+(j+4)*39]->py);
onyert=true;
}

    }

aktualissor+=1;

    }
    // forwardslash iranyban �tl�s keres�s a f��tl�t�l jobbra
     aktualissor=36;
for (int i=0;i<40;i++)

    {

    for (int j=0;j<aktualissor;j++){
if(v[i*40+j*39]->gombfelirat=="X" && v[i*40+(j+1)*39]->gombfelirat=="X" && v[i*40+(j+2)*39]->gombfelirat=="X" && v[i*40+(j+3)*39]->gombfelirat=="X" && v[i*40+(j+4)*39]->gombfelirat=="X"){

gout << move_to(v[i*40+j*39]->x+v[i*40+j*39]->px,v[i*40+j*39]->y) << color (255,255,255) << line_to(v[i*40+(j+4)*39]->x,v[i*40+(j+4)*39]->y+v[i*40+(j+4)*39]->py);
xnyert=true;
}
if(v[i*40+j*39]->gombfelirat=="O" && v[i*40+(j+1)*39]->gombfelirat=="O" && v[i*40+(j+2)*39]->gombfelirat=="O" && v[i*40+(j+3)*39]->gombfelirat=="O" && v[i*40+(j+4)*39]->gombfelirat=="O"){

gout << move_to(v[i*40+j*39]->x+v[i*40+j*39]->px,v[i*40+j*39]->y) << color (255,255,255) << line_to(v[i*40+(j+4)*39]->x,v[i*40+(j+4)*39]->y+v[i*40+(j+4)*39]->py);
onyert=true;
}

    }

aktualissor-=1;

    }

}


