/* program def01.c */
/* demo pseudo instruction define */
#include<stdio.h>
#define true  1
#define false 0
#define t	"true"
#define f	"false"
int main()
{               int b=true;
	while ( true )
	{    if ( b )
	     {    printf("%s\n",t);
	          b = false;    }
	     else
	     {    printf("%s\n",f);
	          break;          }
	 }
	 return 0;
}
