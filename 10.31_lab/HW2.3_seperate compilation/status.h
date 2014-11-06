#ifndef status_H
#define status_H

class status
{
public:
	enum book { issuebook=1, returnbook=2, search=4, checkAvailable=8, issueAvailable=16, submitID=32, verifyID=64, requestBook=128 };	
	unsigned int settingstate;		//Àx¦sª¬ºA­È 
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

#endif
