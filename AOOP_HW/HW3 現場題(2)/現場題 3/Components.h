#ifndef Components_H
#define Components_H
#include <iostream>

enum type { series , parallel };

class Components{
	private:
		double resistance;
		char op;
	public:
		Components(double);
		~Components();
		double getvalue();
		Components operator<<(Components*);
		Components operator<<(double);
};

#endif
