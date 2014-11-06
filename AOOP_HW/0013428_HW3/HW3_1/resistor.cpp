#include <iostream>
#include <cmath>
#include "resistor.h"
using namespace std;

Resistor::Resistor()
{
	Resistance = 0.0;
}

Resistor::Resistor(double r)
{
	Resistance = r;
}

Resistor::~Resistor()
{
	//cout<<"\nExit";
}

void Resistor::setValue(double first, double second, double third, double tolerance)
{
	Resistance = (first*10+second)*pow(10.0,third)+tolerance/1000;		
}

void Resistor::outputValue()
{
	cout<<"Resistance: "<<Resistance<<endl;
}

Resistor Resistor::operator+(const Resistor &r)
{
	Resistor temp;
	temp.Resistance = Resistance + r.Resistance;
	return temp;
}

Resistor Resistor::operator||(const Resistor &r)
{
	Resistor temp;
	temp.Resistance = (Resistance+r.Resistance)/(Resistance*r.Resistance);
	return temp;
}

