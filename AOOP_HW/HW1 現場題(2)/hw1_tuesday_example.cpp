#include <iostream>
#include <cstdlib>
using namespace std;

class Person{ 
      
private :
            
            unsigned int UID;
            string member_info;		//�����Ҧr�� 
            unsigned int year, month, day; 
            unsigned int index, data;		//index = A1241235XXX, data = UID + birthday
             
            
public:
    
    Person(){
             reset();
             }
    void reset(){
             index = 0;
			 data = 0;
         }
         
    void start(){
	//���ϵ{���X�Ű�
	
      int choice; 
      while(1){
    
        reset();
        cout <<"(1)compress/(2)decompress: " ;
        cin >> choice;
        
        if(choice == 1){
                   input(0);
                   compress();
                   output(0);
                   }
        else {
             input(1);
             decompress();
             output(1);
             
             }
        
		}
      
      
      }
    void input(int option){
         switch(option){
           case 0:
				cout<<"0~1024 UID: ";
				cin>>UID;
				cout<<"�����Ҧr��: ";
				cin>>member_info;		//string 
				cout<<"�~: ";
				cin>>year;
				cout<<"��: ";
				cin>>month;
				cout<<"��: ";
				cin>>day;
                break;
           case 1:
                //��J�s�X�᪺���
				cout<<"compress number: "<<endl;
				cin>>data;
				cin>>index;
                break;
         }
    }
         
    void output(int option){
         switch(option){
           case 0:
                //��X�s�X�᪺���
				cout<<data<<" "<<index;
                break;
           case 1:
                //��X�s���B�����Ҧr���B�X�ͦ~���
				cout <<"UID: "<<UID<<endl;
				cout<<"year: "<<year<<endl;
				cout<<"month: "<<month<<endl;
				cout<<"day: "<<day<<endl;
                break;
           }
         }
        
    void compress(){
           //�N��ƧQ�Φ줸�B��l�s�X�ܨ�Ӿ�Ƹ̭�
		   data |= UID << 19;
		   data |= year << 11;
		   data |= month << 6;
		   data |= day;
		   //
           int tmp1 = 0, tmp2 = 0;
           tmp1 = member_info[0];
           for(int i=1; i<10; tmp2 << 1, i++) {
              tmp2 |= member_info[i];
           }
           index = tmp1 + tmp2;
	}
           
           
    void decompress(){
         //�N��ƧQ�Φ줸�B��l�q��Ƹ̭��ѽX
         	 day = data & 31;
			 month = (data>>6) & 15;
			 year = (data>>11) & 127; 
         	 UID = (data>>19) & 1023;
         	 //
         	 
    }

};

int main(){
//�D�{���Ű�

    Person p;
    p.start();
        
    
    system("pause");
    return 0;
    }
