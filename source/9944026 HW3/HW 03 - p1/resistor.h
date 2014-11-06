#ifndef Resistor_H
#define Resistor_H
#include <iostream>
class resistor
{
     double resistance;
     
     public:
     resistor(double);
     ~resistor();
     void setvalue(double,double,double,double);
     void outputvalue();
     resistor operator||(const resistor&);
     resistor operator+(const resistor&);     
};
#endif

