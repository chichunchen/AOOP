#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
const double w = 2*3.141592*60;

class complex 
{
     public:
     double real,imag;
           
     complex()
     {
          real=imag=0.0;
     }
     complex(double d)           
     {
          real=imag=d;
     }
     complex(double r,double i)
     {
          real=r;
          imag=i;
     }
          
     complex operator+(const complex &);
     complex operator||(complex &);
     complex operator*(const complex &);
     complex operator/(const complex &);
     friend istream &operator>>(istream &inst, complex &);
     friend ostream &operator<<(ostream &outst, const complex &);
};

class R
{
     public:
     complex z;
     R(double a)
     {
          z.real = a;
          z.imag = 0.0;
     } 
};

class L
{
     public:
     complex z;
     L(double  l)
     {
          z.real = 0.0;
          z.imag = w*l;          
     }
};

class C
{
     public:
     complex z;
     C(double  c)
     {
          z.real = 0.0;
          z.imag = -1/(w*c);          
     }
};



complex complex::operator+(const complex &c)
{
     complex x;
     x.real = real + c.real;
	 x.imag = imag + c.imag;
	 return x;
}

complex complex::operator||( complex &c)
{
     complex x(c.real,c.imag);
     x = c * (*this)/(c + *this);
     return x;
}

complex complex::operator*(const complex &c)
{
     complex x(c.real,c.imag);
     x.real = (real*c.real-imag*c.imag);
     x.imag = (real*c.imag+imag*c.real);
     return x;
} 

complex complex::operator/(const complex &c)
{
     complex x;
	 x.real = (real*c.real+imag*c.imag) / (c.real*c.real+c.imag*c.imag);
	 x.imag = -(real*c.imag-imag*c.real) /(c.real*c.real+c.imag*c.imag);
	 return x;
} 


istream &operator>>(istream &inst,complex &c)
{
     cout<<"Enter magnitude:";
     inst>>c.real;
     cout<<"Enter phase:";
     inst>>c.imag;
     return inst;
}

ostream &operator<<(ostream &outst,const complex &c)
{
     outst<<setiosflags(ios::fixed)<<setprecision(8);
     outst<<"("<<setw(6)<<c.real;
     outst<<","<<setw(6)<<c.imag<<")[A]"<<endl;
     return outst;
}

int main()
{
     double a, b, c, d, e; 
     cin>>a>>b>>c>>d>>e;
     
     R R1(a);
     C C2(b);
     L L3(c);
     R R4(d);
     R R5(e);
     
     complex zab = R1.z+(C2.z||L3.z||R4.z)+R5.z;
     cout<<zab;
        
     system("pause");
     return 0;
}
