#include "StdAfx.h"
#include "micro_beverage.h"
#include <iostream>

micro_beverage::show()
{
	cout<<"商品名稱:"<<name<<endl<<"價格:"<<price<<endl<<"有效期限:"<<ex_date<<endl<<"容量:"<<volume<<endl<<"微波時間:"<<micro_time;
}