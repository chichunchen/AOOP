#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    unsigned int short date;    //將date宣告成長度為2的無號整數 
    unsigned short int day,month,year;

    cout<<"Enter the day (1~31): ";//輸入「日 」 
    do
    {
        cin>>day; //1~31
    }
    while(day>31||day<1);
    cout<<endl;

    cout<<"Enter the month (1~12): ";//輸入「月」 ，並且做2月最大只到 29日的判斷 
    do
    {
        cin>>month; //1~12
    }
    while(month>12||month<1);
    cout<<endl;

    if(month==2 && day>29)
    {
        while(day>29||day<1)
        {
            cout<<"Enter the day again (1~29): ";
            cin>>day; //1~31
        }
        cout<<endl;
    }

    cout<<"Enter the year : ";//輸入「年 」 
    cin>>year;
    cout<<endl;

    date=day+(month<<5)+(year<<9);//將數字已乘以2的n次方assign到date 

    // 作顯示動作，年是往右移動9位，月是先往左移動7位(將年洗掉) 再往右移動12位，日是先往左移動4位(將月洗掉) 再往右移動11位 
    cout<<"Date:";
    cout<<"民國:"<<(date>>9)<<"年"
        <<((date<<=7)>>12)<<"月"<<((date<<=4)>>11)<<"日"
        <<endl;
        

    system("pause");
    return 0;
}
