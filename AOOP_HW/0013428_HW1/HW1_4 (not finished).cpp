#include <iostream>
using namespace std;

int main()
{
	int n[1000];		//�D�ح���̦h1000��piles 
	int p;				//the number of piles
	int win=0;			//�O��Ĺ�����ʪ��Ӽ�			
	do{
		n[1000]={0};	//�C�����N�Ҧ�pile�������k0 (only available with std=c++11 of gnu++11)
		cout << "Enter the pile(s) < 1000: ";
		cin >> p;
		for(int i=0; i<p; i++){
			cout << "Enter the number of stones in pile "<<i+1<<": ";
			cin >> n[i];
		}
		int Xor=0;
		Xor=n[0];
		
		for(int i=0; i<p; i++) 	Xor ^= n[i];		//��Xor�x�s�C�ӼƦrXor�����G 
		/*
		if(Xor==0)	win=0;		//�YXor�����G��0�A��ܳB��骺���A 
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
