/* program fun07.c */
/* demo function call is statement */
#include<stdio.h>
int main()
{
	void reverse_digit(int);
	int x;
	printf("Enter one 4-digits number : ");
	scanf("%d",&x);
	reverse_digit( x );
	return 0;
}
void reverse_digit( int n )
{
	while ( n != 0 )
	{
		printf("%d",n%10);
		n /= 10;
	}
	printf("\n");
}
