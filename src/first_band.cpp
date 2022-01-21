#include "../include/first_band.h"
#include "../include/resistor.h"
#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;
string IdentifyFirstBand(Resistor &r)
{
    int res;
   map<string,int> m;
   m["black"]=0;
   m["brown"]=1;
   m["red"]=2;
   m["orange"]=3;
   m["yellow"]=4;
   m["green"]=5;
   m["blue"]=6;
   m["violet"]=7;
   m["grey"]=8;
   m["white"]=9; 
   res=m[r.getFirstColor()]*100+m[r.getSecondColor()]*10+m[r.getThirdColor()];
   res=res*pow(10,m[r.getMultiplier()]);
   string final;
   if(r.getTolerance()=="gold")
   {
       final=to_string(res)+" +-5%";
   }
   else if(r.getTolerance()=="silver")
   {
        final=to_string(res)+" +-10%";
   }
   else
   {
       final=to_string(res)+" +-0%";
   }
   return final;
}