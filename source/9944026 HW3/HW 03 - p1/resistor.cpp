#include <iostream>
#include <cmath>
#include "resistor.h"
using namespace std;
resistor::resistor(double r=0.0)
{
     resistance=r;
}

void resistor::setvalue(double first,double second,double third,double tolerance)
{
     resistance=(first*10+second)*pow(10.0,third)+tolerance/1000;
}

void resistor::outputvalue()
{
     cout<<"resistance :"<<resistance<<endl;
}

resistor resistor::operator+(const resistor &r)
{
     resistor temp(resistance);
     temp.resistance+=r.resistance;
     cout<<r.resistance<<endl;
     return temp;
}

resistor resistor::operator||(const resistor &r)
{
     resistor temp(resistance);
     temp.resistance=(temp.resistance*r.resistance)/(temp.resistance+r.resistance);
     cout<<r.resistance<<endl;
     return temp;
}

resistor::~resistor()
{
     cout<<"Exit"<<endl;
}
