#pragma once
#include "commodity.h"
ref class daily_necessities :
public commodity
{
	char* date;
	char* producer;
public:
	daily_necessities(void);
};

