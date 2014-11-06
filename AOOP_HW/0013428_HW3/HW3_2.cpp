#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double integral(double, double, double);
double voltage();
double capacitance();
double current_i(double); 

void UI()
{
	double t0, t, volt, n, c=0.0000001;
	
	while(1) {
		cout<<"Enter t0, t, volt, v "<<endl;
		cout<<"t0: ";
		cin>>t0;
		cout<<"t: ";
		cin>>t;
		cout<<"n: ";
		cin>>n;
		cout<<"volt: ";
		cin>>volt;
	
		cout<<(integral(t0,t,n)/c)+volt<<endl<<endl;
	}
}

int main()
{
	UI();
		
	system("pause");
	return 0;
}

double integral (double a, double b, double n)
{	
	double integral = current_i(a) + current_i(b);
	double h = (b-a)/n;
	
	for(double i=a+h; i<b-h; i+=h) {
		integral += 2*current_i(i); 
		cout<<"current"<<current_i(i)<<endl;
	}
	integral *= (h/2.0);
	
	return integral;
}

double current_i (double time)
{
	return 0.5*exp((-time)/0.000001);
}

