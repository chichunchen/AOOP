#include <iostream>
#include <cstdlib>
using namespace std;

class Spacecraft
{
	private:
		double displacement_x, displacement_y;
		double velocity_x, velocity_y;
		double acceleration_x, acceleration_y;
		double time;

	public:
		
		Spacecraft(double vx0, double vy0, double ax0, double ay0, double t0) 
		{
			displacement_x=0;
			displacement_y=0;
			velocity_x=vx0;
			velocity_y=vy0;
			acceleration_x=ax0;
			acceleration_y=ay0;
			time=t0;
		}
		
		void compute(double t)
		{
			velocity_x=velocity_x+acceleration_x*t;
			velocity_y=velocity_y+acceleration_y*t;
			displacement_x=velocity_x+0.5*acceleration_x*t*t;
			displacement_y=velocity_y+0.5*acceleration_y*t*t;
		}
		
		void input()
		{
			cout<<"initial vx: ";
			cin>>velocity_x;
			cout<<"initial vy: ";
			cin>>velocity_y;
			cout<<"initial ax: ";
			cin>>acceleration_x;
			cout<<"initial ay: ";
			cin>>acceleration_y;
			cout<<"time interval: ";
			cin>>time;
			cout<<endl;
		}
		
		void display()
		{
			for(double i=0; i<=time; i++) {
				compute(i);
				cout<<"time: "<<i<<" sec"<<endl;
				cout<<"vx: "<<velocity_x<<endl;
				cout<<"vy: "<<velocity_y<<endl;
				cout<<"displacement x: "<<displacement_x<<endl;
				cout<<"displacement y: "<<displacement_y<<endl;
				cout<<endl;
			}
		}
};

int main()
{
	Spacecraft s(1.0, 2.0, 3.0, 4.0, 5.0);
	s.input();
	s.display();
    system("pause");
    return 0;
}

