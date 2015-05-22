#include "JatekMester.h"

JatekMester::JatekMester()
{
    //ctor
}

JatekMester::~JatekMester()
{
    //dtor
}



void JatekMester::work (std ::vector <button*> &v)
 {
for (int i=0;i<v.size();i++){
    if(v[i]->megnyomtak==true && xjon==true){
        v[i]->gombfelirat="X";
        v[i]->megnyomtak=false;
        xjon=false;
    }

    if(v[i]->megnyomtak==true && xjon==false){
        v[i]->gombfelirat="O";
        v[i]->megnyomtak=false;
        xjon=true;
    }


}




 }
