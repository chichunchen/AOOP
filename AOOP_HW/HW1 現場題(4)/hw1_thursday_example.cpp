#include <iostream>
#include <conio.h>

using namespace std;

class Map{ 
      
    private :
            
            //請在此宣告需要用到的變數
            
    public:
    
    Map(){
	
           //完成初始化以及歸零
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
					set_map();
                    print();
         }
         
         
    }
    
    void set_map(){
      
	  //將地圖資訊存入int內
         
    }
         
    void print(){
         system("cls");
         
		 //輸出地圖 "□"  "■"
         
         
    }
        
   

};

int main(){

    Map m;
    
    m.start();
    
    
    
    system("pause");
    return 0;
    }
