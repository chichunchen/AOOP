#include <iostream>
using namespace std;

int main()
{
	int n[1000];		//題目限制最多1000個piles 
	int p;				//the number of piles
	int win=0;			//記錄贏的移動的個數			
	do{
		n[1000]={0};	//每次都將所有pile內的值歸0 (only available with std=c++11 of gnu++11)
		cout << "Enter the pile(s) < 1000: ";
		cin >> p;
		for(int i=0; i<p; i++){
			cout << "Enter the number of stones in pile "<<i+1<<": ";
			cin >> n[i];
		}
		int Xor=0;
		Xor=n[0];
		
		for(int i=0; i<p; i++) 	Xor ^= n[i];		//用Xor儲存每個數字Xor的結果 
		/*
		if(Xor==0)	win=0;		//若Xor的結果為0，表示處於輸的狀態 
		else {
			int temp=0;
			int count=0;
			temp=Xor;
		}
		*/
		for(int i=0; i<p; i++) 	cout<<Xor<<" ";
	}while(n>0);
	return 0;
}
