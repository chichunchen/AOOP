#include "StdAfx.h"
#include "customer.h"


customer::customer(void)
{
	money = 0.0;
}

void customer::set_money(double mon)
{
	money = mon;
}

double customer::show_money()
{
	return money;
}

void customer::buy(double mon)
{
	money -= mon;
}

void customer::reset()
{
	money = 0;
}