#include <iostream>
#include <cstdlib>
#include "status.h"
using namespace std;

int main()
{
    while(1) {
		unsigned int n;
		cout<<"Enter the status (1.issue 2.return 3.search 4.check 5.issueAvailable 6.submitID 7.verifyID 8.requestBook):";
     	cin>>n;
     	status booking;		//�إߪ��� 
     	booking.state(n);	

		
		booking.ISissuebook(); 
     	booking.ISreturnbook();
     	booking.ISsearch();
     	booking.IScheckAva();
     	booking.ISissueAva();
     	booking.ISverfyID();
		booking.ISsubmitID();
     	booking.ISrequestBook();

		cout<<endl;
	}
	system("pause");
	return 0;
}
