//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : �K�Q�ө��t��
//  @ File Name : daily_necessities.h
//  @ Date : 2013/12/16
//  @ Author : 
//
//


#if !defined(_DAILY_NECESSITIES_H)
#define _DAILY_NECESSITIES_H

#include "Commodity.h"

class daily_necessities : public Commodity {
private:
	char date;
	char producer;
public:
	void set();
	void show_list();
};

#endif  //_DAILY_NECESSITIES_H