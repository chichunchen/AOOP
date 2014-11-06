/* program const03.c */
/* demo bit operation */
#include<stdio.h>
#include<conio.h>
main()
{
	int i = 24;
	int j = 16;
	int k,k1,l,l1,m,n,p,q;
	clrscr();
	k = i & j;        /* BITAND */
	k1= i && j;     /* AND */
	l = i | j;           /* BITOR  */
	l1 = i || j;         /* OR  */
	m = ~i;           /* NOT */
	n = i ^ j;          /* XOR */
	p = i >> 2;       /* Shift right 2 bits */
	q = j << 2;       /* Shift left 2 bits */
	printf("%d BITAND %d = %d\n",i,j,k);
	printf("%d AND %d = %d\n",i,j,k1);
	printf("%d BITOR %d = %d\n",i,j,l);
	printf("%d OR %d = %d\n",i,j,l1);
	printf("NOT %d = %d\n",i,m);
	printf("%d XOR %d = %d\n",i,j,n);
	printf("%d Shift right 2 bit = %d\n",i,p);
	printf("%d Shift left 2 bit = %d\n",j,q);
	getch();
	return 0;
}
