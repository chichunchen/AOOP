#include <iostream>
#include <cmath>
#include "ac_Current.h"
using namespace std;

ac_Current::ac_Current(double i, double p, double n)
{
	IM = i;
	phase = p;
	nt = n;
	frequency = 60;
	tinc = (1/frequency)/nt;
	
	ptr = new double *[2];
	ptr[0] = new double [80];
	ptr[1] = new double [80];
}
		
ac_Current::~ac_Current()
{
	delete ptr;
	cout<<"The dynamic array is deleted";
}
		
void ac_Current::set_ptr()	
{
	for(int i=0;i<2;i++)
		for(int j=0;j<80;j++)
    		ptr[i][j]=0;
            		
    for(int i=0;i<80;i++)
     	ptr[0][i+1]=ptr[0][i]+tinc;
         
   	for(int i=0;i<80;i++)
  		ptr[1][i]=IM*sin(2*PI*(frequency*ptr[0][i])+phase); 
        		
   	for(int i=0;i<80;i++) {	
       		t[i]=ptr[0][i];
       		x[i]=ptr[1][i];
	}
   
    scale(x,25.0); 
    scale(t,80);
}
		
double ac_Current::MAX(double *in) const {
	double max = in[0];
	for(int i=0; i<80; i++) {	
		if(in[i+1]>max)
			max = in[i+1];
	}
	return max;
}
		
double ac_Current::MIN(double *in) const {
	double min = in[0];
	for(int i=0; i<80; i++) {	
		if(in[i+1]<min)
			min = in[i+1];
	}
	return min;
}
		
void ac_Current::scale(double *in,double range)
{
  	double min=MIN(in);
   	double max=MAX(in);
 	for(int i=0;i<80;i++){
 	  	in[i]=round(range*((in[i]-min)/(max-min)));		//將陣列中每個值都存成 0~1 之ratio 在乘上自訂之range 
	}
}
		
void ac_Current::input()
{
	cout<<"IM: ";
	cin>>IM;
	cout<<"Phase: ";
	cin>>phase;
	cout<<"nt: ";
	cin>>nt;		
}		
				
void ac_Current::output() 
{
	cout<<"IM:"<<IM<<endl;
  	cout<<"phase:"<<phase<<endl;
  	cout<<"nt:"<<nt<<endl;
    
   	for(int i=0;i<80;i++) {
       cout<<ptr[0][i]<<" ";
       cout<<ptr[1][i]<<" ";
  	}
    //draw
	for(int i=25;i>=0;i--){
       	for(int j=0;j<79;j++) {
        	if(i==13) cout<<"-";
           	else if(i>13&&x[j]<=i)cout<<" ";
            else if(i<13&&x[j]>=i)cout<<" "; 
            else cout<<"*";
    	} 
    			
        cout<<endl;
    }
}
