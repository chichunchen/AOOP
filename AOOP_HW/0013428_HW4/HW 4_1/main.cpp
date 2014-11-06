#include <iostream>
#include <cstdlib>
#include "ac_Current.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ac_Current a(1.0,2.0,3.0);
	a.input();
	a.set_ptr();
	a.output();
    system("pause");
    return 0;
}
