#ifndef ac_Current_H
#define ac_Current_h
#include <iostream>
const double PI = 3.14159265;

class ac_Current
{
	private:
		double IM;
		double phase;
		double nt;
		double tinc, frequency;			
		double **ptr;
		double t[80], x[80];	//time, value 
	
	public:		
		ac_Current(double, double, double);
		
		~ac_Current();
		
		void set_ptr();	//not 100% understand
		
		double MAX(double *in) const ;
		
		double MIN(double *in) const ;
		
		void scale(double *in, double range);
		
		void input();
		
		void output() ;
};

#endif
