#include<iostream.h>
int main(){
  int x, sum=0;
  cout<<"Please enter integers until press Ctr Z:";
  while( cin>>x)
  { sum+= x;
    cout<<"Please enter integers until press Ctr Z:";
   }
   
   cout<<"sum="<<sum<<endl;
  }
  