#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>
#include "staff.h"
#include "stdio.h"
#include "conio.h"

using namespace std;

staff::staff(char* na, int a, int st)
{
     strcpy(name,na);
     age=a;
     staff_id=st;
}

void staff::show_staff()
{
     cout<<"員工姓名  員工ID    員工年齡"<<endl;
     string s_of_staff;
     ifstream readstaff;
     readstaff.open("staff.txt");
     while(getline(readstaff,s_of_staff))
     {
          cout<<s_of_staff<<endl;
     }
     readstaff.close();
}

void staff::hire()
{

}

int staff::service_time()
{

}
