/* program ccd02.c */

#ifdef __TURBOC__
#define print(n) printf("verson is %x\n",n);
#endif
#include<stdio.h>
int main()
{
	print( __TURBOC__);
	printf("Test predefined preprocessor symbol.\n");
	return 0;
}
