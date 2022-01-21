#include "../include/resistor.h"
#include "../include/first_band.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string first_band, second_band, third_band, multiplier, tolerance;
	std::cout << "Know your resistor value!" << std::endl;
	cout<<"Input all 5 colours starting from left to right"<<endl;
	cin>>first_band>>second_band>>third_band>>multiplier>>tolerance;
	Resistor res(first_band,second_band,third_band,multiplier,tolerance);
	string result=IdentifyFirstBand(res);
	cout<<"The value of resistor is: "<<result<<" ohm"<<endl;
	return 0;
}