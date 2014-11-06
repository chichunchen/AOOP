#ifndef BEVERAGE_H
#define BEVERAGE_H

#include "StdAfx.h"
#include <string>
#include <iostream>
#include "commodity.h"
class beverage:public commodity{
public:
	int volume;
	void show();	
};
#endif