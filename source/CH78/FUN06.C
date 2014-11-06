/* program fun06.c */
/* demo function call is expression */
#include<stdio.h>
int main()
{
	float area(int);
	int r;
	float a;
	printf("Enter radius : ");
	scanf("%d",&r );
	a = area( r );
	printf("Circle area = %10.4f\n",a);
	return 0;
}
float area( int r )
{
	float pi = 3.14159;
	return( pi * r * r );
}
