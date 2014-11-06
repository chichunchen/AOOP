#include <iostream>
using namespace std;

class status
{
public:
	enum book { issuebook=1, returnbook=2, search=4, checkAvailable=8, issueAvailable=16, submitID=32, verifyID=64, requestBook=128 };	
	unsigned int settingstate;		//儲存狀態值 
	void state(unsigned int set); 
	void ISissuebook();
	void ISreturnbook();
	void ISsearch();
	void IScheckAva();
	void ISissueAva();
	void ISsubmitID();
	void ISverfyID();
	void ISrequestBook();
};

void status::state(unsigned int set)
{
	switch(set){
		case 1: settingstate=1;
			break;
		case 2: settingstate=2;
			break;
		case 3: settingstate=4;
			break;
		case 4: settingstate=8;
			break;
		case 5: settingstate=16;
			break;
		case 6: settingstate=32;
			break;
		case 7: settingstate=64;
			break;
		case 8:settingstate=128;
			break;
		default: settingstate=0;
			cout<<"Please enter number from 1 to 8."<<endl;
	}
}

int main()
{
	while(1) {
		unsigned int n;
		cout<<"Enter the status (1.issue 2.return 3.search 4.check 5.issueAvailable 6.submitID 7.verifyID 8.requestBook):";
     	cin>>n;
     	status booking;		//建立物件 
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
	return 0;
}

void status::ISissuebook()
{
	cout<<"the books is issueing (1) ";
    cout<<(settingstate&issuebook)<<endl;
}
void status::ISreturnbook()
{
	cout<<"the books is returning (2) ";
    cout<<(settingstate&returnbook)<<endl;
}
void status::ISsearch()
{
	cout<<"the books is searching (3) ";
    cout<<(settingstate&search)<<endl;
}
void status::IScheckAva()
{
	cout<<"the books is checking available (4) ";
    cout<<(settingstate&checkAvailable)<<endl;
}
void status::ISissueAva()
{
	cout<<"the books is issueing avaliable (5) ";
    cout<<(settingstate&issueAvailable)<<endl;
}
void status::ISsubmitID()
{
	cout<<"the books is submitting (6) ";
    cout<<(settingstate&submitID)<<endl;
}
void status::ISverfyID()
{
	cout<<"the books is verifying (7) ";
    cout<<(settingstate&verifyID)<<endl;
}
void status::ISrequestBook()
{
	cout<<"the books is requesting (8) ";
    cout<<(settingstate&requestBook)<<endl;
}
