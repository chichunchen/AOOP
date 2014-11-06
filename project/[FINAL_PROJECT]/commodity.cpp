#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "commodity.h"
#include "snacks.h"
#include "stdio.h"
#include "conio.h"
using namespace std;


commodity::commodity()
//commodity::commodity(char na[]="danny", int i=1, int n=2, int p=3, int t=4)
{
     array1 = new int*[5];
     array2 = new char**[5];
     for(int i=0;i<5;i++)
     {
        array1[i] = new int[3];
        array2[i] = new char*[3];
        for(int j=0;j<3;j++)
          array2[i][j] = new  char[20];
     }
     /*
     strcpy(name,na);
     id=i;
     num=n;
     price=p;
     type=t;
     */
}


void commodity::set(char *na="asdasd", int i=1, int n=2, int p=3, int t=4)
{
     ofstream write_c;
     
     int number;
     cout<<"你想設定什麼? 1.零食 2.飲料 3.生活用品"<<endl;
     cin>>number;
     if(number==1)
          write_c.open("snacks1.txt",ios::out|ios::app);
     else if(number==2)
          write_c.open("drinks1.txt",ios::out|ios::app);
     else if(number==3)
          write_c.open("daily_necessities1.txt",ios::out|ios::app);
     write_c<<setw(9)<<left<<na
                  <<setw(9)<<left<<i
                  <<setw(9)<<left<<n
                  <<setw(9)<<left<<p
                  <<setw(9)<<left<<t;
     write_c.close();
     /*
     strcpy(name,na);
     id=i;
     num=n;
     price=p;
     type=t;
     */
} 

void commodity::show_list(int number)
{
     ifstream read_c;
     
     if(number==1)
          read_c.open("snacks1.txt",ios::in);
     else if(number==2)
          read_c.open("drinks1.txt",ios::in);
     else if(number==3)
          read_c.open("daily_necessities1.txt",ios::in);
     read_c>>name;
     read_c>>id;
     read_c>>num;
     read_c>>price;
     read_c>>type;
     
     cout<<"1.商品名稱: "<<name<<endl;
     cout<<"2.商品編號: "<<id<<endl;
     cout<<"3.商品數量: "<<num<<endl;
     cout<<"4.商品價格: "<<price<<endl;
     cout<<"5.商品種類: "<<type<<endl;
     
     read_c.close();
}

int commodity::increase(int n)
{
    num+=n;
    commodity::set("asdasd",1,num,3,4);
    return num;
} 

int commodity::decrease(int n)
{
    num=num-n;
    cout<<"number"<<num<<endl;
    return num;
    //尚未加不夠怎麼辦 
}

int commodity::get_price()
{
    return price;
}

int commodity::get_num()
{
     return num;
}

void commodity::search()
{
     int search_number1;
     cout<<"要查詢哪一種商品? 1.零食 2.飲料 3.生活用品"<<endl;
     cin>>search_number1;
     if(search_number1==1)
     {
          string s_of_search1;
          ifstream readsnacks;
          readsnacks.open("snacks1.txt");
          cout<<"商品名稱 商品編號 商品數量 商品價格 商品種類 製造日期 製造廠商 商品重量(g)"<<endl;
          while(getline(readsnacks,s_of_search1))
          {
               cout<<s_of_search1<<endl;
          }
     }
     else if(search_number1==2)
     {
          string s_of_search2;
          ifstream readdrinks;
          readdrinks.open("drinks1.txt");
          cout<<"商品名稱 商品編號 商品數量 商品價格 商品種類 製造日期 製造廠商"<<endl;
          while(getline(readdrinks,s_of_search2))
          {
               cout<<s_of_search2<<endl;
          }
     }
     else if(search_number1==3)
     {
          string s_of_search3;
          ifstream readd_nec;
          readd_nec.open("daily_necessities1.txt");
          cout<<"商品名稱 商品編號 商品數量 商品價格 商品種類 製造日期 製造廠商"<<endl;
          while(getline(readd_nec,s_of_search3))
          {
               cout<<s_of_search3<<endl;
          }
     }
     else ;
}
