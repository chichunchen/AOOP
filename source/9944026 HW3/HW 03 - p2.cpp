#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double intergral(double a,double b,double n)
{
       double h,i_of_ta,i_of_tb;
       double sum,result;
       
       //i_of_ta=a;
       //i_of_tb=b;
       i_of_ta=0.5*exp((-a)/0.000001);
       i_of_tb=0.5*exp((-b)/0.000001);
       
       h=(b-a)/n;
       
       for(double i=a+h;i<=b-h;i=i+h)
       {
           sum+=0.5*exp((-i)/0.000001);  
       }
       
       //result=(i_of_ta+i_of_tb)+2*sum;
       result=(h/2.0)*((i_of_ta+i_of_tb)+2*sum);
       
       return result;
}
int main()
{
    double t0,t,volt,n,c=0.0000001;
	while(1)
	{
		cin>>t0>>t>>n>>volt;
    	cout<<((intergral(t0,t,n)/c)+volt)<<endl;
	}
    
    system("pause");
    return 0;
}
    
    
