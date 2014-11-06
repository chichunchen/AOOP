#pragma once
#include "commodity.h"
ref class book :
public commodity
{
	char* issue_date;
	char* author;
public:
	book(void);
};

