/* program while02.c */
/* demo while long using */
#include<stdio.h>
int main()
{
	int a,b,r;
	printf("Enter two integer value: ");
	scanf("%d %d",&a,&b);
	while ( b != 0 )
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("gcd = %d\n",a);
	return 0;
}
