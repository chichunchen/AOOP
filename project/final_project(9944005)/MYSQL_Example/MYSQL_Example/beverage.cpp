#include "StdAfx.h"
#include "beverage.h"
#include <iostream>

beverage::show()
{
	cout<<"商品名稱:"<<name<<endl<<"價格:"<<price<<endl<<"有效期限:"<<ex_date<<endl<<"容量:"<<volume;
}