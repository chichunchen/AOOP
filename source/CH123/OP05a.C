/* program op05a.c */
/* demo conditional expression and operator */
#include<stdio.h>
#include<conio.h>
int main()
{               int x,y,pos;
	pos=(x >y) ? 1 : ( (x==y) ? 0 : -1 );
	printf("pos= %d\n", pos);
	getch();
	return 0;
}
