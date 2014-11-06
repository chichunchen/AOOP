#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Spacecraft
{
    float dx,dy,vx,vy,sx,sy,t;
    
    public:
    Spacecraft(float v0x,float v0y,float s0x,float s0y,float t0)
    {
        dx=0;dy=0;
        
        vx=v0x;sx=s0x;
        
        vy=v0y;sy=s0y;
        
        t=t0;
    }
    void display()
    {
        for(int i=0;i<=t;i++)
        {       
            cout<<"t="<<i<<endl;
            cout<<"x:"<<vx*i+0.5*sx*i*i;
            cout<<"vx:"<<sx*i<<" ";
            cout<<"sx:"<<sx<<" ";
            cout<<endl;
            cout<<"y:"<<vy*i+0.5*sy*i*i<<" ";
            cout<<"vy:"<<sy*i<<" ";
            cout<<"sy:"<<sy<<endl;
        }
    }
        
};
int main()
{
    Spacecraft space(1,1,1,1,10);
    space.display();
    
    system("pause");
    return 0;
}



