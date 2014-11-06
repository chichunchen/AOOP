#ifndef MICRO_BEVERAGE_H
#define MICRO_BEVERAGE_H

#include "StdAfx.h"
#include <string>
#include <iostream>
#include "beverage.h"
class micro_beverage:public beverage{
public:
	int micro_time;
	void show();	
};
#endif