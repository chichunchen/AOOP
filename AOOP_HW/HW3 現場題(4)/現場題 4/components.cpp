#include <iostream>
#include <cmath>
#include "components.h"
#include "extension.h"
#include <fstream>
using namespace std;
const double PI = 3.141592;

components::components(double a, double b, double c)
{
     value = ((10*a)+b)*pow(10,c); 
     
     pic = new double*[2]; 
     pic[0]=new double[1000]; 
     pic[1]=new double[1000]; 
     pic[0][0]=0;                                        
}

Supply::Supply(double v, double f)
{
     voltage = v;
     frequency = f;                
}

components components::operator << (Supply a)
{
     s = &a;     
}

components components::operator >> (int time)
{
     for(int i=time-1; i>=0; i--) {       
          pic[1][i]= (s->volt())*sin(2*PI*(s->freq())*i/1000);  
     }       
     for(int i=time-1; i>=0; i--) {
          pic[0][i] = pow(pic[1][i],2.0)/value;   
     }
     
     using namespace ext;
     
     ofstream outfile;
     outfile.open("test.html");
     outfile<<convert_html(*this,2,time);
     outfile.close();   
}

double Supply::freq()
{
     return frequency;
}

double Supply::volt()
{
     return voltage;        
}

