#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class complex //converting the rectangular form to polar form
{
     private:
     double real,imag,realp,imagp;
     double ap,theta,app,thetap;
           
     public:
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
          ap=sqrt(real*real+imag*imag);
          theta=atan(imag/real);
     }
     /*void set(double r1,double i1)
     {
          real=r1;
          imag=i1;
          ap=sqrt(real*real+imag*imag);
          theta=atan(imag/real);
     }*/
     
     void convert()
     {
          ap=sqrt(real*real+imag*imag);
          theta=atan(imag/real);
     }
          
     void write()
     {
          cout<<"ap="<<ap<<'\t';
          cout<<"theta="<<theta<<endl;
          cout<<"real="<<real<<endl;
          cout<<"imag="<<imag<<endl;
     }
     complex operator+(const complex &);
     complex operator||(const complex &);
     complex operator*(const complex &);
     complex operator/(const complex &);
     friend istream &operator>>(istream &inst,complex &);
     friend ostream &operator<<(ostream &outst,const complex &);
};

complex complex::operator+(const complex &c)
{
     complex x(c.real,c.imag);
     x.real=real+c.real;
     x.imag=imag+c.imag;
     x.ap=sqrt(x.real*x.real+x.imag*x.imag);
     x.theta=atan(x.imag/x.real);
     return x;
}

complex complex::operator||(const complex &c)
{
     complex x(c.real,c.imag);
     
     //兩複數加完後轉成極座標 
     x.realp=real+c.real;
     x.imagp=imag+c.imag;
     x.app=sqrt(x.realp*x.realp+x.imagp*x.imagp);
     x.thetap=atan(x.imagp/x.realp);
     
     //為了做乘法而轉的極座標 
     x.ap=ap*c.ap;
     x.theta=theta+c.theta;
     
     x.ap=x.ap/x.app;
     x.theta=x.theta-x.thetap;
     
     x.real=x.ap*cos(x.theta);
     x.imag=x.ap*sin(x.theta);
     
     return x;
}

complex complex::operator*(const complex &c)
{
     complex x(c.real,c.imag);
     x.ap=ap*x.ap;
     x.theta=theta+x.theta;
     return x;
} 

complex complex::operator/(const complex &c)
{
     complex x(c.real,c.imag);
     x.ap=ap/x.ap;
     x.theta=theta-x.theta;
     return x;
} 


istream &operator>>(istream &inst,complex &c)
{
     cout<<"Enter magnitude:";
     inst>>c.real;
     cout<<"Enter phase:";
     inst>>c.imag;
     c.ap=sqrt(c.real*c.real+c.imag*c.imag);
     c.theta=atan(c.imag/c.real);
     return inst;
}

ostream &operator<<(ostream &outst,const complex &c)
{
     outst<<setiosflags(ios::fixed)<<setprecision(8);
     outst<<"("<<setw(6)<<c.ap;
     outst<<","<<setw(6)<<c.theta<<")[A]"<<endl;
     return outst;
}


int main()
{
     double V0,theta,w=6.2831852,c=5,l=3;
          
     complex zc(0,-1.0/(w*c));
     cout<<"ZC="<<zc<<endl;
     
     complex zl(0,w*l);
     cout<<"ZL="<<zl<<endl;
     
     complex r1;
     cin>>r1;
     cout<<"R1="<<r1<<endl;
     
     complex r2;
     cin>>r2;
     cout<<"R2="<<r2<<endl;
     
     complex zeq;
     zeq=r1+(r2||zl)+zc;
     cout<<"Zeq="<<zeq<<endl;
     
        
     system("pause");
     return 0;
}
