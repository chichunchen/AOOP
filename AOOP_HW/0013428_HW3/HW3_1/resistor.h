#ifndef resistor_H
#define resistor_H
#include <iostream>

class Resistor
{
	private:
		double Resistance;
	public:
		Resistor();
		Resistor(double);
		~Resistor();
		void setValue(double,double,double,double);
     	void outputValue();
     	Resistor operator+(const Resistor&);   
		Resistor operator||(const Resistor&);
};

#endif
