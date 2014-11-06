#include "Convenience_store.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Convenience_Store::Convenience_Store() {
	cout<<"按編號選擇... 1.買東西 2.商品資料 3.員工系統 4.離開商店 ==> ";
	cin>>number;
	
	do {
		switch(number) {
			case 1: 
					customer.display();
					cout<<"按編號選擇... 1.買東西 2.商品資料 3.員工系統 4.離開商店 ==> ";
					cin>>number;
					break;
			case 2: 
					display_commodity();
					cout<<"按編號選擇... 1.買東西 2.商品資料 3.員工系統 4.離開商店 ==> ";
					cin>>number;
					break;
			case 3: 
					staff.display();
					cout<<"按編號選擇... 1.買東西 2.商品資料 3.員工系統 4.離開商店 ==> ";
					cin>>number;
					break;
			case 4: cout<<"\n歡迎下次再度使用本系統"<<endl;
					break;
			default:
					cout<<"\n請重新輸入! 1.買東西 2.商品資料 3.員工系統 4.離開商店"<<endl;
					break;
		}
	} while(number!=4);
}

void Convenience_Store::display_commodity() {
	int num;
	ifstream read_commodity;
    do {
    	cout<<"你想查什麼? 1.食物 2.飲料 3.生活用品 4.書籍 5.回上一選單 ==> ";
    	cin>>num;
    	switch(num) {
    		case 1:	
    			fd.show_list();
    			cout<<"你想查什麼? 1.食物 2.飲料 3.生活用品 4.書籍 5.回上一選單 ==> ";
    			cin>>num;
    			break;
    		case 2: 
    			dr.show_list();
    			cout<<"你想查什麼? 1.食物 2.飲料 3.生活用品 4.書籍 5.回上一選單 ==> ";
    			cin>>num;
				break;
			case 3: 
				dn.show_list();
				cout<<"你想查什麼? 1.食物 2.飲料 3.生活用品 4.書籍 5.回上一選單 ==> ";
    			cin>>num;
				break;
			case 4: 
				bk.show_list();
				cout<<"你想查什麼? 1.食物 2.飲料 3.生活用品 4.書籍 5.回上一選單 ==> ";
    			cin>>num;
				break;
			case 5: 
				break;
			default: cout<<"再輸入一次!"<<endl;			
    	}
    } while(num!=5);
}
