#include <iostream>
#include <conio.h>
#include "Complex.h"

int main(int argc, char** argv) {
	Complex c1(1.1, 2.2);
	Complex c2(5.5, 7.7);
	Complex c3(0.0,0.0);
	c3=c1+c2;
	c3.write();
	
	getch();
	return 0;
}
