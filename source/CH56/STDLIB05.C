/* program stdlib05.c */
/* demo rand() application */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,num;
	randomize();
	for ( i=0 ; i<10 ; i++ )
	{
		num = rand() % 6 + 1;
		// num = random(6)+1;
		printf("%3d ",num);
	}
	printf("\n");
	return 0;
}
