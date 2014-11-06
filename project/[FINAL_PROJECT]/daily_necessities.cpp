#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "commodity.h"
#include "daily_necessities.h"
#include "stdio.h"
#include "conio.h"
using namespace std;
//daily_necessities::daily_necessities(char* na, int i, int n, int p, int t, char* d, char* pr):commodity(na,i,n,p,t)
daily_necessities::daily_necessities():commodity()
{
     /*
     strcpy(date,d);
     strcpy(producer,pr);
     */
}

void daily_necessities::set(char* d, char* pr)
{
     commodity::set("n",1,2,3,4);
     ofstream writedns_c;
     writedns_c.open("daily_necessities1.txt",ios::out|ios::app);
     writedns_c<<setw(9)<<left<<d
               <<setw(9)<<left<<pr<<endl;
     writedns_c.close();
}

void daily_necessities::show_list()
{
     commodity::show_list(3);
     ifstream readdns_dn;
     readdns_dn.open("daily_necessities1.txt",ios::in);
     char a;
     int b,c,d,e;
     readdns_dn>>a;
     readdns_dn>>b;
     readdns_dn>>c;
     readdns_dn>>d;
     readdns_dn>>e;
     readdns_dn>>date;
     readdns_dn>>producer;
     cout<<"6.製造日期: "<<date<<endl;
     cout<<"7.製造廠商: "<<producer<<endl;
     
     readdns_dn.close();
}
