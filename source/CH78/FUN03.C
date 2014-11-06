/* program fun03.c */
/* demo function return */
#include<stdio.h>
int main()
{
	long fact(void);
	long f;
	f = fact();
	printf("The factorial = %ld\n",f);
	return 0;
}
long fact(void)
{
	int i,n;
	long f=1;
	printf("Enter one value : ");
	scanf("%d",&n);
	for ( i=1 ; i<=n ; i++ )
		f *= i;
	return( f );
}
