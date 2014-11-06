#include <cstdlib>
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "commodity.h"
#include "snacks.h"
#include "stdio.h"
#include "conio.h"
using namespace std;
//snacks::snacks(char* na="danny", int i=1, int n=2, int p=3, int t=4, char *d="david", char *pr="garboo", double w=5.0):commodity(na,i,n,p,t)
snacks::snacks():commodity()
{
      /*
      strcpy(date,d);
      strcpy(producer,pr);
      weight=w;
      */
}
void snacks::set(char* d, char* pr, double w)
{
     commodity::set("dadaaaa",1,2,3,4);
     ofstream writesnacks_c;
     writesnacks_c.open("snacks1.txt",ios::out|ios::app);
     writesnacks_c<<setw(9)<<left<<d
                  <<setw(9)<<left<<pr
                  <<setw(9)<<left<<w<<endl;
     writesnacks_c.close();
}
void snacks::show_list()
{
     commodity::show_list(1);
     
     ifstream readsnacks_s;
     readsnacks_s.open("snacks1.txt",ios::in);
     char a;
     int b,c,d,e;
     readsnacks_s>>a;
     readsnacks_s>>b;
     readsnacks_s>>c;
     readsnacks_s>>d;
     readsnacks_s>>e;
     readsnacks_s>>date;
     readsnacks_s>>producer;
     readsnacks_s>>weight;
     cout<<"6.製造日期: "<<date<<endl;
     cout<<"7.製造廠商: "<<producer<<endl;
     cout<<"8.重量(g) : "<<weight<<endl;
     
     readsnacks_s.close();
}
