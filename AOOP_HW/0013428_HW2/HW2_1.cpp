#include <iostream>
using namespace std;

namespace box {
	int length=1;
	int width=1;
	int height=1;
	int vol=1;
	void print(){
		vol*=length*width*height;
		cout<<"The volume of the box: "<<vol<<endl;
	}
}
using namespace box;

namespace {
	int min=0, max=0;
	void compare() {
		max = length>width ? length>height ? length : height : width>height ? width : height; 
		min = length;
		if(min>width) min=width;
		if(min>height) min=height;
	}
	void display() {
		compare();
		cout<<"The smallest side is "<<min<<endl;
		cout<<"The largest side is "<<max<<endl;
	}
}

int main()
{
	while(1) {
		cout<<"Length: ";
		cin>>length;
		cout<<"width: ";
		cin>>width;
		cout<<"height: ";
		cin>>height;
		print();
		display();
		cout<<endl<<endl;
	}
	return 0;
}
