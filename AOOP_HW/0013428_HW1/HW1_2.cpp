#include <iostream>
using namespace std;

int main()
{
	int day, month, year;		//為了檢查日期是否真的存在，先不設為unsigned以便檢查 
	unsigned short int date;	//16 bits 之短整數 
	while(1) {
		do{
		cout << "Enter day (1~31): "; 
		cin >> day;
	}while(day>31||day<1);
	
	do{
		cout << "Enter month (1~12 and make sure that it's exists): "; 
		cin >> month;
	}while((month>12||month<1)||(month==2&&(day==30||day==31))||	//排除不存在的日期配對 
		((month==4||month==6||month==9||month==11)&&day==31));		//此行與上一行為同一條件式 
	
	do{
		cout << "Enter year (greater than 1 and also smaller than 128): "; 
		cin >> year;
	}while(year<=0||year>=128);		//由於題目限定date為短整數，年份不得超過7個bits 
	
	date = day + (month << 5) + (year << 9);
	
	cout << "民國 " << (date>>9) << "年 ";
	cout << ((date<<=7)>>12) << "月 "; 					//先將年份消去再往右移 
	cout << ((date<<=4)>>11) << "日"<<endl<<endl;		//先將月份消去再往右移 
	}
	return 0;
} 
