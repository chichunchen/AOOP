#include <iostream>
#include "Components.h"
using namespace std;

Components::Components(double r)
{
	resistance = r;
	op = NULL;
}

Components::~Components()
{
	cout<<"delete"<<endl;
}

double Components::getvalue()
{
	return resistance;
}

Components Components::operator<< (Components *C)
{
	if(op=='+') 
		resistance = resistance + C->resistance;
	else if(op=='|')
		resistance = (resistance * C->resistance)/(resistance + C->resistance);
}
//op
Components Components::operator<< (double O)
{
	if(O==series) 
		this->op = '+';
	else if(O==parallel)
		this->op = '|';
}


