#include "StdAfx.h"
#include "commodity.h"


commodity::commodity(void)
{
	id = 0;
	name = "";
	number = 10;
	price = 0;
	selectType = 0;
}

void commodity::set_price(int p)
{
	price = p;
}

void commodity::set_num(int num)
{
	number = num;
}

void commodity::increase(int num)
{
	number += num;
}

void commodity::decrease(int num)
{
	number -= num;
}

int commodity::get_price()
{
	return price;
}

int commodity::get_num()
{
	return number;
}

int commodity::total()
{
	return price*number;
}
