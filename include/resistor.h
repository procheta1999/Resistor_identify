#ifndef RESISTOR_H
#define RESISTOR_H
#include <iostream>
#include <string>
#include <map>
using namespace std;
class Resistor
{
    private:
      string first_color;
      string second_color;
      string third_color;
      string multiplier;
      string tolerance;
      
    public:
      Resistor();
      Resistor(string arg_first_color,string arg_second_color,string arg_third_color, string arg_multiplier, string arg_tolerance);
      string getFirstColor();
      string getSecondColor();
      string getThirdColor();
      string getTolerance();
      string getMultiplier();

};
#endif