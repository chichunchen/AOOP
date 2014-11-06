#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Map{ 
      
    private :
            
            unsigned int s;
            unsigned int location_x;
            unsigned int location_y;
            
    public:
    
    Map(){
	
           s=0;
           location_x=0;
           location_y=0;
    }
   
    void start(){
      print();
         while(char control=getch()){
               switch(control){
			   //switch內可維持原設定，也可自行定義
                   case 105: //i up
                        if(location_y<3){ 
                          location_y++;
                        }
                        
                   break;
                   case 106: //j left
                        if(location_x<7){
                          location_x++;
                        }
                   break;
                   case 107: //k down
                        if(location_y>0){
                          location_y--;
                        }
                        
                   break;
                   case 108: //l right                     
                        if(location_x>0){
                          location_x--;
                        }
                        
                   default:
                           break;   
               }      
					set_map(location_x, location_y);
                    print();
         }
         
         
    }
    
    void set_map(unsigned int x, unsigned int y){
      
      int temp=(1<<(x+(y*8)));										//最重要的一步，由temp記錄這個step所經過的點 
      s^=temp;         												//再用XOR判斷，若第一次經過則變1，反之變0 
    }
         
    void print(){
         system("cls");
         unsigned int mask=1;
         for(int i=0; i<31; i++) mask<<=1;							//先將mask移至最大位數，也就是2^31(left shift 31 times) 
         for(int i=31; i>=0; i--) {
         	if((s & mask)==0) cout<<"□";
         	else cout<<"■";
         	mask>>=1;												//將mask逐漸移至最小位 
         	if((i==24)||(i==16)||(i==8)||(i==0)) cout<<endl;		//一排八個即換行 
         }
         cout<<"map code: "<<s;
    }
        
};

int main(){

    Map m;    
    m.start();

    system("pause");
    return 0;
    }
