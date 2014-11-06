#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "consumer.h"
#include "commodity.h"
#include "snacks.h"
#include <iomanip>
#include "stdio.h"
#include "conio.h"
using namespace std;

consumer::consumer(int m)
{
     money=m;
}

void consumer::buy()
{
     int **array1;
     char ***array2;
     array1 = new int*[5];
     array2 = new char**[5];
     for(int i=0;i<5;i++)
     {
        array1[i] = new int[3];
        array2[i] = new char*[3];
        for(int j=0;j<3;j++)
          array2[i][j] = new  char[20];
     }
     int number;
     ofstream write_buylist;
     write_buylist.open("buylist.txt",ios::out);
     cout<<"要買哪一種商品? 1.零食 2.飲料 3.生活用品 4.退出"<<endl;
     cin>>number;
          
     while(1){
     if(number==1)
     {
          system("cls");
          char name1[20];
          int  id1;
          int  num1;
          int price1;
          int type1;
          char date1[20];
          char producer1[10];
          int weight1;
          ifstream readsnacks1;
          ofstream writesnacks1;
          readsnacks1.open("snacks1.txt",ios::in);
          
          cout<<"商品名稱 商品編號 商品數量 商品價格 商品種類 製造日期 製造廠商 商品重量(g)"<<endl; 
          for(int i=0;i<5;i++)
          {
              readsnacks1>>name1;
              readsnacks1>>id1;
              readsnacks1>>num1;
              readsnacks1>>price1;
              readsnacks1>>type1;
              readsnacks1>>date1;
              readsnacks1>>producer1;
              readsnacks1>>weight1;
              /*cout<<setw(9)<<left<<name
                  <<setw(9)<<left<<id
                  <<setw(9)<<left<<num
                  <<setw(9)<<left<<price
                  <<setw(9)<<left<<type
                  <<setw(9)<<left<<date
                  <<setw(9)<<left<<producer
                  <<setw(9)<<left<<weight
                  <<endl;*/
              strcpy(array2[i][0],name1);
              array1[i][0] = id1;
              array1[i][1] = num1;
              array1[i][2] = price1;
              array1[i][3] = type1;
              strcpy(array2[i][1],date1);
              strcpy(array2[i][2],producer1);
              array1[i][4] = weight1;
              /*for(int j=0;j<strlen(date);j++)
                   array2[i][j]=date[j];
              for(int j=0;j<strlen(producer);j++)
                   array2[i][j]=producer[j];
              for(int j=0;j<strlen(weight);j++)
                   array2[i][j]=weight[j];*/
              /*for(int j=0;j<9;j++)
              {
                   
                   array2[i][j]=date[j];
                   array2[i][j]=producer[j];
                   array2[i][j]=weight[j];
              }*/
              cout<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
                  <<setw(9)<<left<<array1[i][4]
                  <<endl;          
              
              
              //............
              
          }
          int index1;
          int the_id1;
          int the_num1;
          cout<<"買什麼?(輸入id)"<<endl; 
          cin>>the_id1;
          for(index1=0; index1<5; index1++)
               if(array1[index1][0]==the_id1)
                    break;
          
          cout<<"買幾個?"<<endl; 
          cin>>the_num1;
          array1[index1][1]-=the_num1;
          money-=the_num1*array1[index1][2];
          show_money();
          //cout<<array2[index][0]<<endl;
          readsnacks1.close();
          write_buylist<<setw(9)<<left<<array2[index1][0]
                  <<setw(9)<<left<<the_num1
                  <<setw(9)<<left<<array1[index1][2]
                  <<endl;
          writesnacks1.open("snacks1.txt",ios::out);
         for(int i=0;i<5;i++)
          {
              writesnacks1<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
                  <<setw(9)<<left<<array1[i][4]
                  <<endl;
             /* cout<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
                  <<setw(9)<<left<<array1[i][4]
                  <<endl;*/ 
          }
              /*writesnacks<<array2[i][0];
              writesnacks<<array1[i][0];
              writesnacks<<array1[i][1];
              writesnacks<<array1[i][2];
              writesnacks<<array1[i][3];
              writesnacks<<array2[i][1];
              writesnacks<<array2[i][2];
              writesnacks<<array1[i][4];
          }*/
          
              /*for(int j=0;j<strlen(date);j++)
                   date[j]=array2[i][j];
              for(int j=0;j<strlen(producer);j++)
                   producer[j]=array2[i][j];
              for(int j=0;j<strlen(weight);j++)
                   weight[j]=array2[i][j];
              /*for(int j=0;j<9;j++)
              {
                   name[j]=array2[i][j];
                   date[j]=array2[i][j];
                   producer[j]=array2[i][j];
                   weight[j]=array2[i][j];
              }*/
             // cout<<setw(9)<<left<<name<<setw(9)<<left<<id<<setw(9)<<left<<num<<setw(9)<<left<<price<<setw(9)<<left<<type<<setw(9)<<left<<date<<setw(9)<<left<<producer<<setw(9)<<left<<weight<<endl;
              //for(int j=0;j<sizeof(name);j++)
              //     writesnacks<<*name<<setw(9);
              //writesnacks<<left<<id<<setw(9);
             // writesnacks<<left<<num<<setw(9);
             // writesnacks<<left<<price<<setw(9);
             // writesnacks<<left<<type<<setw(9);
              /*for(int j=0;j<9;j++)
              {
                   writesnacks<<date[j];
                   writesnacks<<producer[j];
                   writesnacks<<weight[j];
              }*/              
              //............
          
          
          writesnacks1.close();
          number=0;
          
          //while(getline(readsnacks,s_of_s2))
         //      writesnacks<<s_of_s2<<"\n";
               
         
         /*readsnackss.open("snacks1.txt");
      
         while(getline(readsnackss,s_of_s2))
         {    
              for(int i=0;i<s_of_s2.length();i++)
              {
                   if(nameS==s_of_s2[i])
                       s_of_s2.replace(18,1,"ha");
                       break;
              }
             writesnacks<<s_of_s2<<"\n";
         }
           /*
          while(getline(readsnacks,s_of_s2))
          {    
              for(int i=0;i<s_of_s2.length();i++)
              {
                  if(nameS==s_of_s2[i])
                       s_of_s2.replace(18,8,"ha");
              }
              write_buylist<<s_of_s2<<"\n";
              
         }
          write_buylist.close();
          /*
          snacks s("dada", 1,2,3,4,"david","garboo",5);
          s.show_list();
          
          cin>>numS;
          c.decrease(numS);
          s.set("david","garboo",5);
          s.show_list();
          */
     }
     else if(number==2)
     {
          system("cls");
          char name2[20];
          int  id2;
          int  num2;
          int  price2;
          int  type2;
          char date2[20];
          char producer2[10];
          ifstream readsnacks2;
          ofstream writesnacks2;
          readsnacks2.open("drinks1.txt",ios::in);
          cout<<"商品名稱 商品編號 商品數量 商品價格 商品種類 製造日期 製造廠商"<<endl; 
          for(int i=0;i<5;i++)
          {
              readsnacks2>>name2;
              readsnacks2>>id2;
              readsnacks2>>num2;
              readsnacks2>>price2;
              readsnacks2>>type2;
              readsnacks2>>date2;
              readsnacks2>>producer2;
              /*cout<<setw(9)<<left<<name
                  <<setw(9)<<left<<id
                  <<setw(9)<<left<<num
                  <<setw(9)<<left<<price
                  <<setw(9)<<left<<type
                  <<setw(9)<<left<<date
                  <<setw(9)<<left<<producer
                  <<setw(9)<<left<<weight
                  <<endl;*/
              array1[i][0] = id2;
              array1[i][1] = num2;
              array1[i][2] = price2;
              array1[i][3] = type2;
              strcpy(array2[i][0],name2);
              strcpy(array2[i][1],date2);
              strcpy(array2[i][2],producer2);
              
              /*for(int j=0;j<strlen(date);j++)
                   array2[i][j]=date[j];
              for(int j=0;j<strlen(producer);j++)
                   array2[i][j]=producer[j];
              for(int j=0;j<strlen(weight);j++)
                   array2[i][j]=weight[j];*/
              /*for(int j=0;j<9;j++)
              {
                   
                   array2[i][j]=date[j];
                   array2[i][j]=producer[j];
                   array2[i][j]=weight[j];
              }*/
              cout<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
//                  <<setw(9)<<left<<array1[i][4]
                  <<endl;           
                            
          }
          int index2;
          int the_id2;
          int the_num2;
          cout<<"買什麼?(輸入id)"<<endl; 
          cin>>the_id2;
          for(index2=0; index2<5; index2++)
               if(array1[index2][0]==the_id2)
                    break;
          
          cout<<"買幾個?"<<endl; 
          cin>>the_num2;
          array1[index2][1]-=the_num2;
          money-=the_num2*array1[index2][2];
          show_money();
          //cout<<array2[index][0]<<endl;
          readsnacks2.close();
          write_buylist<<setw(9)<<left<<array2[index2][0]
                  <<setw(9)<<left<<the_num2
                  <<setw(9)<<left<<array1[index2][2]
                  <<endl;
          writesnacks2.open("drinks1.txt",ios::out);
         for(int i=0;i<5;i++)
          {
              writesnacks2<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
       //           <<setw(9)<<left<<array1[i][4]
                  <<endl;
             /* cout<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
         //         <<setw(9)<<left<<array1[i][4]
                  <<endl; */ 
          }
          writesnacks2.close();
          number=0;
          
          
     }
     else if(number==3)
     {
          system("cls");
          char name3[20];
          int  id3;
          int  num3;
          int  price3;
          int  type3;
          char date3[20];
          char producer3[10];
          ifstream readsnacks3;
          ofstream writesnacks3;
          readsnacks3.open("daily_necessities1.txt",ios::in);
          cout<<"商品名稱 商品編號 商品數量 商品價格 商品種類 製造日期 製造廠商"<<endl; 
          for(int i=0;i<5;i++)
          {
              readsnacks3>>name3;
              readsnacks3>>id3;
              readsnacks3>>num3;
              readsnacks3>>price3;
              readsnacks3>>type3;
              readsnacks3>>date3;
              readsnacks3>>producer3;
             
              array1[i][0] = id3;
              array1[i][1] = num3;
              array1[i][2] = price3;
              array1[i][3] = type3;
              strcpy(array2[i][0],name3);
              strcpy(array2[i][1],date3);
              strcpy(array2[i][2],producer3);
              
              cout<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
           //       <<setw(9)<<left<<array1[i][4]
                  <<endl; 
          }
          int index3;
          int the_id3;
          int the_num3;
          cout<<"買什麼?(輸入id)"<<endl; 
          cin>>the_id3;
          for(index3=0; index3<5; index3++)
               if(array1[index3][0]==the_id3)
                    break;
          
          cout<<"買幾個?"<<endl; 
          cin>>the_num3;
          array1[index3][1]-=the_num3;
          money-=the_num3*array1[index3][2];
          show_money();
          //cout<<array2[index][0]<<endl;
          readsnacks3.close();
          write_buylist<<setw(9)<<left<<array2[index3][0]
                  <<setw(9)<<left<<the_num3
                  <<setw(9)<<left<<array1[index3][2]
                  <<endl;
          writesnacks3.open("daily_necessities1.txt",ios::out);
         for(int i=0;i<5;i++)
          {
              writesnacks3<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
        //          <<setw(9)<<left<<array1[i][4]
                  <<endl;
              /*cout<<setw(9)<<left<<array2[i][0]
                  <<setw(9)<<left<<array1[i][0]
                  <<setw(9)<<left<<array1[i][1]
                  <<setw(9)<<left<<array1[i][2]
                  <<setw(9)<<left<<array1[i][3]
                  <<setw(9)<<left<<array2[i][1]
                  <<setw(9)<<left<<array2[i][2]
          //        <<setw(9)<<left<<array1[i][4]
                  <<endl; */ 
          }
          writesnacks3.close();
          number=0;
          getch();
          system("cls");
     }
     else if(number==4)
          break;
     else
     {
          cout<<"要買哪一種商品? 1.零食 2.飲料 3.生活用品 4.退出"<<endl; 
          cin>>number;
          getch();
          system("cls");
     }
   }
   write_buylist.close();
   
   
}
void consumer::show_buy()
{
     string buy;
     ifstream buylist;
     buylist.open("buylist.txt");
     cout<<"買了下列商品 :"<<endl;
     cout<<"商品名稱 商品數量 商品價格"<<endl;
     while(getline(buylist,buy))
     {
          cout<<buy<<endl;
     }
     buylist.close();
     getch();
     system("cls");
}
void consumer::show_money()
{
     cout<<"你還有"<<money<<"元"<<endl;
     getch();
     system("cls");
}
void consumer::reset()
{
     cout<<"你有多少錢?"<<endl; 
     cin>>money;
     cout<<money<<"元"<<endl;
     getch();
     system("cls");
}
