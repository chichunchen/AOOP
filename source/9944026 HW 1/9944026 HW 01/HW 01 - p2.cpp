#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    unsigned int short date;    //�Ndate�ŧi�����׬�2���L����� 
    unsigned short int day,month,year;

    cout<<"Enter the day (1~31): ";//��J�u�� �v 
    do
    {
        cin>>day; //1~31
    }
    while(day>31||day<1);
    cout<<endl;

    cout<<"Enter the month (1~12): ";//��J�u��v �A�åB��2��̤j�u�� 29�骺�P�_ 
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

    cout<<"Enter the year : ";//��J�u�~ �v 
    cin>>year;
    cout<<endl;

    date=day+(month<<5)+(year<<9);//�N�Ʀr�w���H2��n����assign��date 

    // �@��ܰʧ@�A�~�O���k����9��A��O����������7��(�N�~�~��) �A���k����12��A��O����������4��(�N��~��) �A���k����11�� 
    cout<<"Date:";
    cout<<"����:"<<(date>>9)<<"�~"
        <<((date<<=7)>>12)<<"��"<<((date<<=4)>>11)<<"��"
        <<endl;
        

    system("pause");
    return 0;
}
