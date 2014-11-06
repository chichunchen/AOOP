#include <iostream>
#include "Complex.h"

Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

void Complex::write()
{
	cout<<"real part is "<<real<<endl;
	cout<<"imag part is "<<imag<<endl;
}


Complex Complex::operator+(const Complex c)
{
	return Complex(real+c.real, imag+c.imag);
}

Complex Complex::operator-(const Complex c)
{
	return Complex(real-c.real, imag-c.imag);
}
