#include "Convenience_store.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Convenience_Store::Convenience_Store() {
	cout<<"���s�����... 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө� ==> ";
	cin>>number;
	
	do {
		switch(number) {
			case 1: 
					customer.display();
					cout<<"���s�����... 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө� ==> ";
					cin>>number;
					break;
			case 2: 
					display_commodity();
					cout<<"���s�����... 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө� ==> ";
					cin>>number;
					break;
			case 3: 
					staff.display();
					cout<<"���s�����... 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө� ==> ";
					cin>>number;
					break;
			case 4: cout<<"\n�w��U���A�רϥΥ��t��"<<endl;
					break;
			default:
					cout<<"\n�Э��s��J! 1.�R�F�� 2.�ӫ~��� 3.���u�t�� 4.���}�ө�"<<endl;
					break;
		}
	} while(number!=4);
}

void Convenience_Store::display_commodity() {
	int num;
	ifstream read_commodity;
    do {
    	cout<<"�A�Q�d����? 1.���� 2.���� 3.�ͬ��Ϋ~ 4.���y 5.�^�W�@��� ==> ";
    	cin>>num;
    	switch(num) {
    		case 1:	
    			fd.show_list();
    			cout<<"�A�Q�d����? 1.���� 2.���� 3.�ͬ��Ϋ~ 4.���y 5.�^�W�@��� ==> ";
    			cin>>num;
    			break;
    		case 2: 
    			dr.show_list();
    			cout<<"�A�Q�d����? 1.���� 2.���� 3.�ͬ��Ϋ~ 4.���y 5.�^�W�@��� ==> ";
    			cin>>num;
				break;
			case 3: 
				dn.show_list();
				cout<<"�A�Q�d����? 1.���� 2.���� 3.�ͬ��Ϋ~ 4.���y 5.�^�W�@��� ==> ";
    			cin>>num;
				break;
			case 4: 
				bk.show_list();
				cout<<"�A�Q�d����? 1.���� 2.���� 3.�ͬ��Ϋ~ 4.���y 5.�^�W�@��� ==> ";
    			cin>>num;
				break;
			case 5: 
				break;
			default: cout<<"�A��J�@��!"<<endl;			
    	}
    } while(num!=5);
}
