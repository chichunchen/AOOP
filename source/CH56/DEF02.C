/* program def02.c */
/* demo define constand and function */
#include<stdio.h>
#define pi		3.14159
#define Area(r) 	2*pi*(r)*(r)
int main()
{
	int radius,x ;
	printf("Enter radius : ");
	scanf(" %d",&radius);
	printf("The area = %10.4f\n",Area(radius));
//compiler  printf("The area = %10.4f\n",2*pi*(radius)*(radius));	
                scanf(" %d",&x);
	printf("The area = %10.4f\n",Area(x));
//compiler  printf("The area = %10.4f\n",2*pi*(x)*(x));	

	return 0;
}
