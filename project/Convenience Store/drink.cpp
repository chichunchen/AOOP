//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : 便利商店系統
//  @ File Name : drink.cpp
//  @ Date : 2013/12/16
//  @ Author : 
//
//


#include "drink.h"

void drink::set() {

}

void drink::show_list() {
	ifstream read_d;
    read_d.open("drinks.txt",ios::in);
    
    read_d>>name;
    read_d>>id;
    read_d>>num;
	read_d>>price;
    read_d>>date;
    read_d>>producer;
     
    cout<<"1.商品名稱: "<<name<<endl;
    cout<<"2.商品編號: "<<id<<endl;
    cout<<"3.商品數量: "<<num<<endl;
    cout<<"4.商品價格: "<<price<<endl;
    cout<<"5.飲用期限: "<<date<<endl;
	cout<<"6.製造商:   "<<producer<<endl;
    
    read_d.close();
}



