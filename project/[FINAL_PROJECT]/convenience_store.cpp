#include <cstdlib>
#include <iostream>
#include "commodity.h"
#include "snacks.h"
#include "drinks.h"
#include "daily_necessities.h"
#include "convenience_store.h"
#include "consumer.h"
#include "staff.h"
#include "stdio.h"
#include "conio.h"
using namespace std;

convenience_store::convenience_store()
{
     cout<<"按編號選擇... 1.買東西 2.商品資料 3.員工系統 4.離開商店"<<endl;
     cin>>number;
    
    while(1)
    {
         if(number==1)
         {
              int money;
              cout<<"你有多少錢?"<<endl;
              cin>>money;
              consumer con(money);
             
              system("cls");
              
              int num1;
              while(1){
              cout<<"按編號選擇... 1.可購買商品 2.剩餘金額 3.購買清單 4.退出:"; 
              cin>>num1;
              if(num1==1)
                   con.buy();
              else if(num1==2)
                   con.show_money();
              else if(num1==3)
                   con.show_buy();
              else if(num1==4)
                   break;
              else
                   cout<<"再輸入一次!"<<endl;
              }
               cout<<"按編號選擇... 1.買東西 2.商品資料 3.員工系統 4.離開商店"<<endl;
               cin>>number;
               getch();
               system("cls");
         }
         else if(number==2)
         {
              commodity com;
              snacks sna;
              drinks dri;
              daily_necessities dai;
              
              int num2;
              cout<<"按編號選擇... 1.查詢商品:";
              cin>>num2;
              if(num2==1) 
              {
                   int number;
                   cout<<"你想查什麼? 1.零食 2.飲料 3.生活用品"<<endl;
                   cin>>number;
                   if (number==1)
                        sna.show_list();
                   else if(number==2)
                        dri.show_list();
                   else if(number==3)
                        dai.show_list();
                   //com.search();
                  // com.show_list(number);
              }
              cout<<"按編號選擇... 1.買東西 2.商品資料 3.員工系統 4.離開商店"<<endl;
              cin>>number;
              getch();
              system("cls");
              
         }
         else if(number==3)
         {
              staff st("n",1,2);
              st.show_staff();
              cout<<"按編號選擇... 1.買東西 2.商品資料 3.員工系統 4.離開商店"<<endl;
              cin>>number;
              getch();
              system("cls");
         }
         else if(number==4)
         {
              system("cls");
              break;
         }
         else
         {
              cout<<"請重新輸入! 1.買東西 2.商品資料 3.員工系統 4.離開商店"<<endl;
              getch();
              system("cls");
         }   
    }
}
