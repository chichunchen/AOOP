#include <iostream>
using namespace std;

int main()
{
	short int a[20];		
	int status=1;
	int language=1;
	int category=1;
	int s, l, c;
	for(int i=0; i<20; i++) {
		cout << "Economic status: upper, middle, and lower class for 0,1,2: ";
		cin >> s;
		cout << "\nLanguages : English, Chinese, Regional language for 3,4,5: ";
		cin >> l;
		cout << "\nEnter Category of paper: daily, supplement, tabloid for 6,7,8: ";
		cin >> c;
		
		a[i]= (status << s) + (language << l) + (category << c);
		
		cout<<endl<<endl;
	}
	
	int count1=0, count2=0, count3=0;									//answers of question 1,2,3
	
	for(int i=0; i<20; i++) if(((a[i]>>3)<<3)==72) count1++;			//�N���쩹�����N012��bit�٥h�A�b���^ 
	cout<<"Number of person who read English daily: "<<count1<<endl;
	
	for(int i=0; i<20; i++) if((a[i]&455)==257) count2++;				//455���G�i�쬰111000111�A�ت��b��N�����T��mask�� 
	cout<<"Number of upper class who read tabloid: "<<count2<<endl; 	//257��upper class & tabloid ���� 
	
	for(int i=0; i<20; i++) if((a[i]&56)==32) count3++;					//56���G�i�쬰000111000�A �u�d����language������ 
	cout<<"Number of regional language readers: "<<count3<<endl;		//32�� regional language���� 
	
	
	return 0;
}
