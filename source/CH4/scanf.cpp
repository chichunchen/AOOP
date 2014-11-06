//the end of file symbol at the run time is Ctrl Z  or Ctrl D
//the end of file symbol in the program is EOF
//c:\tc\95cs\t3.cpp
#include<stdio.h>
int main(){
  int x; 
  while( scanf(" %d", &x) != EOF)
    printf("  x=%d\n", x);
  return 0;  
    }

//c:\tc\95cs\t4.cpp   
#include<iostream.h>
int main(){
	int x;
	while(cin>>x)
	  cout<<"x="<<x<<endl;
	  return 0;
	 } 
	    
    
    