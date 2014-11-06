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
					set_map(location_x, location_y);
                    print();
         }
         
         
    }
    
    void set_map(unsigned int x, unsigned int y){
      
      int temp=(1<<(x+(y*8)));										//�̭��n���@�B�A��temp�O���o��step�Ҹg�L���I 
      s^=temp;         												//�A��XOR�P�_�A�Y�Ĥ@���g�L�h��1�A�Ϥ���0 
    }
         
    void print(){
         system("cls");
         unsigned int mask=1;
         for(int i=0; i<31; i++) mask<<=1;							//���Nmask���̤ܳj��ơA�]�N�O2^31(left shift 31 times) 
         for(int i=31; i>=0; i--) {
         	if((s & mask)==0) cout<<"��";
         	else cout<<"��";
         	mask>>=1;												//�Nmask�v�����̤ܳp�� 
         	if((i==24)||(i==16)||(i==8)||(i==0)) cout<<endl;		//�@�ƤK�ӧY���� 
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
