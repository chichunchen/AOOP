#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string finame, foutname, data;
	ifstream infile;
	ofstream outfile;
	cout<<"Input file name: ";
	cin>>finame;
	infile.open(finame.c_str());
	cout<<"Output file name: ";
	cin>>foutname;
	infile.open(finame.c_str());
	while(getline(infile, data)) {
		outfile<<data<<"\n\n";
	}
	infile.close();
	outfile.close();
	return 0;
}
