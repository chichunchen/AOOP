#include<stdio.h>
int main(){
  char ch1, ch2;
  while( ( ch1=getch()) != 'q')
     if ( ch1== 0 )
        { ch2 =getch();
          printf(" The extended code  is %d  %d\n", ch1, ch2);
        }
     else 
          printf(" Character is %c, ASCII code is %c\n, ch1,ch1);
}