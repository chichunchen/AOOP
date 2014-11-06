//Case I
int n=1,c=0, s=0;
while(n){
   scanf(" %d", &n);
   s+=n;
   c++;   }
printf(" avg=%f \n", (float) s/(c-1) );  

//Case II
int n,c=0, s=0;
scanf(" %d",&n);
while(n){
   s+=n;
   c++; 
   scanf(" %d", &n);  }
printf(" avg=%f \n", (float) s/c  ); 

//Case III
int n,c=0, s=0;
do{
   scanf(" %d", &n);
   s+=n;
   c++; }
while(n);
printf(" avg=%f \n", (float) s/(c-1)  ); 

//Case IV
int n,c=0, s=0;
while(1) {
   scanf(" %d",&n);
   if ( n==0) break;
   s+=n;
   c++;  }
printf(" avg=%f \n", (float) s/c  ); 




