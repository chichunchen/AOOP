#include <iostream>
using namespace std;

void showbits(int n)
{
	int count = 0;		//�p��n���b�G�i��U����� 
	int temp = n;		//�����n�]�w���Ȧs�� 
	int mask = 1;		//�줸�B�n���� 
	
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
