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
     cout<<"���s�����... 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө�"<<endl;
     cin>>number;
    
    while(1)
    {
         if(number==1)
         {
              int money;
              cout<<"�A���h�ֿ�?"<<endl;
              cin>>money;
              consumer con(money);
             
              system("cls");
              
              int num1;
              while(1){
              cout<<"���s�����... 1.�i�ʶR�ӫ~ 2.�Ѿl���B 3.�ʶR�M�� 4.�h�X:"; 
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
                   cout<<"�A��J�@��!"<<endl;
              }
               cout<<"���s�����... 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө�"<<endl;
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
              cout<<"���s�����... 1.�d�߰ӫ~:";
              cin>>num2;
              if(num2==1) 
              {
                   int number;
                   cout<<"�A�Q�d����? 1.�s�� 2.���� 3.�ͬ��Ϋ~"<<endl;
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
              cout<<"���s�����... 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө�"<<endl;
              cin>>number;
              getch();
              system("cls");
              
         }
         else if(number==3)
         {
              staff st("n",1,2);
              st.show_staff();
              cout<<"���s�����... 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө�"<<endl;
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
              cout<<"�Э��s��J! 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө�"<<endl;
              getch();
              system("cls");
         }   
    }
}
