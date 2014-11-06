/* program def03.c */
/* demo define function */

#define f(x)    2*(x)*(x)-4*(x)+5
main()
{
	int x, a;
	printf("Enter one integer value : ");
	scanf(" %d",&a);
	printf("The f(%d) = 2x^2 - 4x + 5 = %d\n",a, f(a) );
}
