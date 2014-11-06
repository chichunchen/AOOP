#ifndef COMMODITY_H
#define COMMODITY_H

#include "StdAfx.h"
#include <string>
#include <iostream>
class commodity{
public:
	int price,ex_date,No,amount,buy;
	char name;
	//System::String^ name;
	System::Void show();
	System::Void import();
};
#endif