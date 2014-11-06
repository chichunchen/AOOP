/* program def04.c */
/* demo define function */
#include<stdio.h>
#define odd(q)	((q) %2 == 1 ) ? 1 : 0
int main()
{
	int x;
	printf("Enter one integer value : ");
	scanf(" %d",&x);
	if ( odd(x) )
		printf("%d is odd number.\n",x);
	else
		printf("%d is even number.\n",x);
	return 0;
}
