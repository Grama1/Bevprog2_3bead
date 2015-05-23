#include "JatekMester.h"

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
// viszintes keresés
for (int i=0;i<v.size()-4;i++){

    if(v[i]->gombfelirat=="X" && v[i+1]->gombfelirat=="X" && v[i+2]->gombfelirat=="X" && v[i+3]->gombfelirat=="X" && v[i+4]->gombfelirat=="X")
    {
        xnyert=true;
    }
    if(v[i]->gombfelirat=="O" && v[i+1]->gombfelirat=="O" && v[i+2]->gombfelirat=="O" && v[i+3]->gombfelirat=="O" && v[i+4]->gombfelirat=="O")
    {
        onyert=true;
    }

if (i==35+(sorsz-1)*40)
{
    i=40+(sorsz-1)*40;
    sorsz+=1;
}
    }
    sorsz=1;
}


