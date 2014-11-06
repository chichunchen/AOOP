#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "commodity.h"
#include "drinks.h"
#include "stdio.h"
#include "conio.h"
using namespace std;
//drinks::drinks(char* na, int i, int n, int p, int t, char *d, char *pr):commodity(na,i,n,p,t)
drinks::drinks():commodity()
{
     /*
     strcpy(date,d);
     strcpy(producer,pr);
     */
}
void drinks::set(char* d, char* pr)
{
     commodity::set("na",5,6,7,8);
     ofstream writedrinks_c;
     writedrinks_c.open("drinks1.txt",ios::out|ios::app);
     writedrinks_c<<setw(9)<<left<<d
               <<setw(9)<<left<<pr<<endl;
     writedrinks_c.close();
}

void drinks::show_list()
{
     commodity::show_list(2);
     ifstream readdrinks_d;
     char a;
     int b,c,d,e;
     readdrinks_d.open("drinks1.txt",ios::in);
     readdrinks_d>>a;
     readdrinks_d>>b;
     readdrinks_d>>c;
     readdrinks_d>>d;
     readdrinks_d>>e;
     readdrinks_d>>date;
     readdrinks_d>>producer;
     
     cout<<"6.製造日期: "<<date<<endl;
     cout<<"7.製造廠商: "<<producer<<endl;
     
     readdrinks_d.close();
}
