#include <iostream>
using namespace std;

int main()
{
	int day, month, year;		//���F�ˬd����O�_�u���s�b�A�����]��unsigned�H�K�ˬd 
	unsigned short int date;	//16 bits ���u��� 
	while(1) {
		do{
		cout << "Enter day (1~31): "; 
		cin >> day;
	}while(day>31||day<1);
	
	do{
		cout << "Enter month (1~12 and make sure that it's exists): "; 
		cin >> month;
	}while((month>12||month<1)||(month==2&&(day==30||day==31))||	//�ư����s�b������t�� 
		((month==4||month==6||month==9||month==11)&&day==31));		//����P�W�@�欰�P�@���� 
	
	do{
		cout << "Enter year (greater than 1 and also smaller than 128): "; 
		cin >> year;
	}while(year<=0||year>=128);		//�ѩ��D�ح��wdate���u��ơA�~�����o�W�L7��bits 
	
	date = day + (month << 5) + (year << 9);
	
	cout << "���� " << (date>>9) << "�~ ";
	cout << ((date<<=7)>>12) << "�� "; 					//���N�~�����h�A���k�� 
	cout << ((date<<=4)>>11) << "��"<<endl<<endl;		//���N������h�A���k�� 
	}
	return 0;
} 
