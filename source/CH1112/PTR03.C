/* program ptr03.c */
/* demo pointer as parameter pass by address */

main()
{
	void sub(int **,int **);
	int a=1,b=2,*p,*q;
	p=&a;
	q=&b;
	sub(&p,&q);
	printf("%3d %3d\n",*p,*q);
}
void sub(int **x,int **y)
{
	*x = *y;
}
