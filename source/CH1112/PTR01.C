/* program ptr01.c */
/* demo pointer concept */
#include<stdio.h>
int main()
{
	int a=2,*p,*q;
	*p=&a;
	q = p;
	printf("%3d %3d\n",*p,*q);
	return 0;
}
