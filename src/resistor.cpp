#include "../include/resistor.h"
#include <iostream>
#include <string>
using namespace std;
Resistor::Resistor()
{
    first_color="Null";
    second_color="Null";
    third_color="Null";
    multiplier="Null";
    tolerance="Null";
}
Resistor::Resistor(string arg_first_color,string arg_second_color,string arg_third_color, string arg_multiplier, string arg_tolerance)
{
    first_color=arg_first_color;
    second_color=arg_second_color;
    third_color=arg_third_color;
    multiplier=arg_multiplier;
    tolerance=arg_tolerance;
}
string Resistor::getFirstColor()
{
    return first_color;
}
string Resistor::getSecondColor()
{
    return second_color;
}
string Resistor::getThirdColor()
{
    return third_color;
}
string Resistor::getMultiplier()
{
    return multiplier;
}
string Resistor::getTolerance()
{
    return tolerance;
}