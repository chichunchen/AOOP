#include <iostream>
#include "Components.h"
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	double value;
	char op;
	Components circuit(0);
	Components *res;
	while(1) {
		cin>>value>>op;
		res = new Components(value);
		if(op == ';') {
			circuit<<res;
			delete res;
			break;
		}else {
			circuit << res <<((op=='+') ? series : (op=='|') ? parallel : series);
      		delete res;
		}
	}
	cout <<"the equivalence resistance is "<<circuit.getvalue() <<" £["<<endl;
	system("pause");
	return 0;
}
