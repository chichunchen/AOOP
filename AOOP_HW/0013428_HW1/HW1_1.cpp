#include <iostream>
using namespace std;

void showbits(int n)
{
	int count = 0;		//計算n的在二進位下的位數 
	int temp = n;		//不改動n設定之暫存值 
	int mask = 1;		//位元遮罩之值 
	
	for(; temp>0; count++) temp >>= 1;		//temp=temp/2  
	
	for(; count>1; count--) mask <<= 1;
	
	while(mask>0) {
		if((n & mask)==0) cout << 0;
		else cout << 1; 
		mask >>= 1;
	}
	cout << endl;
}

int main()
{
	int n;
	while(1) { 
		cout << "Enter an integer >=0: ";
		cin>>n;
		showbits(n);
	}
	return 0;
}
