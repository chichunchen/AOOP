#include <iostream>

using namespace std;

class status
{
     public:
     enum goods {shipping=1,purchasing=2,transferring=4,arrival=8,picked=16};
     int settingstate;
     
     void state(int set);
     void isshipping();
     void ispurchased();
     void istransferred();
     void isarrived();
     void ispicked();
};

void status::state(int set)
{
     if(set==1)
          settingstate=1;
     else if(set==2)
          settingstate=2;
     else if(set==3)
          settingstate=4;
     else if(set==4)
          settingstate=8;
     else if(set==5)
          settingstate=16;
}

void status::isshipping()
{
     cout<<"the goods is shipping (1)";
     cout<<(settingstate&shipping)<<endl;
}

void status::ispurchased()
{
     cout<<"the goods is purchasing (2)";
     cout<<(settingstate&purchasing)<<endl;
}

void status::istransferred()
{
     cout<<"the goods is transferring (4)";
     cout<<(settingstate&transferring)<<endl;
}

void status::isarrived()
{
     cout<<"the goods is arrived (8)";
     cout<<(settingstate&arrival)<<endl;
}

void status::ispicked()
{
     cout<<"the goods is picked (16)";
     cout<<(settingstate&picked)<<endl;
}

int main()
{
     int n;
     
     cout<<"Enter the status (1.shipping, 2.purchasing, 3.transferring, 4.arrival, 5.picked):";
     cin>>n;
     
     status goods_status;
     
     goods_status.state(n);
     goods_status.isshipping();
     goods_status.ispurchased();
     goods_status.istransferred();
     goods_status.isarrived();
     goods_status.ispicked();     
          

     return 0;
}
