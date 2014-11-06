#include <iostream>
#include <cstdlib>
#include "resistor.cpp"
int main()
{
     /*
     int c1,c2,c3,c4;
     
     cout<<"Enter the color :"
         <<"Black=0,Brown=1,Red=2,Orange=3,Yellow=4,Green=5,Blue=6,Violet=7,Gray=8,White=9"
         <<endl;
     
     cout<<"First:";
     cin>>c1;
     cout<<endl;
     cout<<"Second:";
     cin>>c2;
     cout<<endl;
     cout<<"Third:";
     cin>>c3;
     cout<<endl;
     cout<<"Forth:";
     cin>>c4;
     cout<<endl;
     
     resistor r1,r2,r3;
     
     r1.setvalue(c1,c2,c3,c4);
     r1.outputvalue();
     
     cout<<"First:";
     cin>>c1;
     cout<<endl;
     cout<<"Second:";
     cin>>c2;
     cout<<endl;
     cout<<"Third:";
     cin>>c3;
     cout<<endl;
     cout<<"Forth:";
     cin>>c4;
     cout<<endl;
     
     r2.setvalue(c1,c2,c3,c4);
     r2.outputvalue();
     
     r3=r1+r2;
     cout<<"Series : ";
     r3.outputvalue();
     cout<<endl;
     
     r3=r1||r2;
     cout<<"Parellal : ";
     r3.outputvalue();
     cout<<endl;
     */
     
     enum color{Black,Brown,Red,Orange,Yellow,Green,Blue,Violet,Gray,White};
     
     resistor r1,r2,r3,r4;
     r1.setvalue(Yellow,Red,Blue,0.0);
     r1.outputvalue();
     
     r2.setvalue(Red,Red,Red,0.0);
     r2.outputvalue();
     
     r3.setvalue(Blue,Blue,Blue,0.0);
     r3.outputvalue();
      
     r4=r1+r2+r3;
     cout<<"Series : ";
     r4.outputvalue();
     cout<<endl;
     
     r4=r1||r2||r3;
     cout<<"Parellal : ";
     r4.outputvalue();
     cout<<endl;
      
     system("pause");
     return 0;    
}
