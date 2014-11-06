#pragma once
#include "commodity.h"
ref class food :
public commodity
{
	char* date;
	char* producer;
	float weight;
	float calories;
	int temperature;
public:
	food(void);

};

