#include <iostream>
#include <conio.h>

using namespace std;

class Map{ 
      
    private :
            
            //�Цb���ŧi�ݭn�Ψ쪺�ܼ�
            
    public:
    
    Map(){
	
           //������l�ƥH���k�s
    }
   
    void start(){
      print();
         while(char control=getch()){
               switch(control){
			   //switch���i������]�w�A�]�i�ۦ�w�q
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
      
	  //�N�a�ϸ�T�s�Jint��
         
    }
         
    void print(){
         system("cls");
         
		 //��X�a�� "��"  "��"
         
         
    }
        
   

};

int main(){

    Map m;
    
    m.start();
    
    
    
    system("pause");
    return 0;
    }
