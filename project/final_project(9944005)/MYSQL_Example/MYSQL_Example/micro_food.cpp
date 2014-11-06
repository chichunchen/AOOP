#include "StdAfx.h"
#include "micro_food.h"
#include <iostream>

micro_food::show()
{
	cout<<"商品名稱:"<<name<<endl<<"價格:"<<price<<endl<<"有效期限:"<<ex_date<<endl<<"組合(1.39元,2.49元):"<<foodtype<<endl<<"微波時間:"<<micro_time;
}