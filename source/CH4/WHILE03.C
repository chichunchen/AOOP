/* program while03.c */
/* demo while loop using */
#include<stdio.h>
int main()
{
	int count = 0;
	printf("Press any key until press return : ");
	while ( getche() != '\r')
		count++;
	printf("\nTotal typing %d characters\n",count );
                return 0;
}
