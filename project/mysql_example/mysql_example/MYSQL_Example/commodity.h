#pragma once
ref class commodity
{
public:
	int id;
	char *name;
	int number;
	int price;
	int selectType;

	commodity(void);
	void set_price(int);
	void set_num(int);
	void increase(int);
	void decrease(int);
	int get_price();
	int get_num();
	int total();
};

