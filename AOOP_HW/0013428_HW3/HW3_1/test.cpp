#include <iostream>
#include <cstdlib>
#include "resistor.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    enum color{Black,Brown,Red,Orange,Yellow,Green,Blue,Violet,Gray,White};
     
    Resistor r1, r2, r3, r4;
    r1.setValue(Yellow,Red,Blue,0.0);
    r1.outputValue();
    
    r2.setValue(Red,Red,Red,0.0);
    r2.outputValue();
	
    r3.setValue(Blue,Blue,Blue,0.0);
    r3.outputValue();
    
	r4=r1+r2+r3;
    std::cout<<"\nSeries : ";
    r4.outputValue();
    std::cout<<std::endl;
    
    r4=r1||r2||r3;
    std::cout<<"Parellal : ";
    r4.outputValue();
    std::cout<<std::endl;
		
	system("pause");
	return 0;
}
