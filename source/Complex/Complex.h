#ifndef Complex_H
#define Complex_H
#include <iostream>
using namespace std;

class Complex {
	double real, imag;
	public:
		Complex(double, double);
		~Complex();
		void write();
		Complex operator+(const Complex);
		Complex operator-(const Complex);
};

#endif
