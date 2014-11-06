#include<string.h>
#include<stdio.h>
void main( ){
  char *str;
  char *partstr;
  str= "String^of things,to ,be^^split"; //produce the same output 
  partstr=strtok(str, "^,");
  while(partstr!=NULL)
  { printf("Token found = '%s'\n",partstr);
    partstr=strtok(NULL,"^,");
  }
  }
 
           //run
           //Token found =  'String'
           //Token found =  'of things'
           //Token found =  'to '
           //Token found =  'be'
           //Token found =  'split'
           //^^兩個delimiter連在一起會bypass