#include <iostream>
#include <cstdlib>
using namespace std;

class Person{ 
      
private :
            
            unsigned int UID;
            string member_info;		//身分證字號 
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
	//此區程式碼勿動
	
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
				cout<<"身分證字號: ";
				cin>>member_info;		//string 
				cout<<"年: ";
				cin>>year;
				cout<<"月: ";
				cin>>month;
				cout<<"日: ";
				cin>>day;
                break;
           case 1:
                //輸入編碼後的資料
				cout<<"compress number: "<<endl;
				cin>>data;
				cin>>index;
                break;
         }
    }
         
    void output(int option){
         switch(option){
           case 0:
                //輸出編碼後的資料
				cout<<data<<" "<<index;
                break;
           case 1:
                //輸出編號、身分證字號、出生年月日
				cout <<"UID: "<<UID<<endl;
				cout<<"year: "<<year<<endl;
				cout<<"month: "<<month<<endl;
				cout<<"day: "<<day<<endl;
                break;
           }
         }
        
    void compress(){
           //將資料利用位元運算子編碼至兩個整數裡面
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
         //將資料利用位元運算子從整數裡面解碼
         	 day = data & 31;
			 month = (data>>6) & 15;
			 year = (data>>11) & 127; 
         	 UID = (data>>19) & 1023;
         	 //
         	 
    }

};

int main(){
//主程式勿動

    Person p;
    p.start();
        
    
    system("pause");
    return 0;
    }
