#include <iostream>
#include <cstdlib>
using namespace std;

class Complex
{
	private:
		double real;
		double imag;
	public:
		Complex(double r = 0, double i = 0){
			real = r;
			imag = i;
		}	
		
		Complex operator+(const Complex &c){
			Complex x;
			x.real = real + c.real;
			x.imag = imag + c.imag;
			return x;
		}
		
		Complex operator/(const Complex &c){
			Complex x;
			x.real = (real*c.real+imag*c.imag) / (c.real*c.real+c.imag*c.imag);
			x.imag = -(real*c.imag-imag*c.real) /(c.real*c.real+c.imag*c.imag);
			return x;
		}	
			
		friend ostream &operator<<(ostream &outst, const Complex &c);
};

ostream &operator<<(ostream &outst, const Complex &c){
			outst<< c.real <<"i  ";
			outst<< c.imag <<"j"<<endl;
			return outst;
		}

int main()
{
	double r, c, f;
	cin>>r>>c>>f;
	Complex one(1, 0), p(0, 2*3.14159*f*c), R(r, 0);
	Complex Ans;
	Ans = one/p/(one/p+r);
	
	cout<<Ans<<endl;
	
	system("pause");
	return 0;
}
