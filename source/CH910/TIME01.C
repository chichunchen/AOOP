/* program time01.c */
/* demo set time and gettime */

#include <dos.h>
void main()
{
	unsigned i,j;
	struct time t;
	t.ti_hour = 0;
	t.ti_min = 0;
	t.ti_sec = 0;
	t.ti_hund = 0;
	settime( &t );	/* set the clock beginning */
	for ( i=0 ; i<65535 ; i++ )
	 for( j=0;j<6000;j++)
		/* dummy loop */;
	gettime( &t );
	printf("Total execution time : ");
	printf("%d:%d:%d.%d\n",
				 t.ti_hour,t.ti_min,t.ti_sec,t.ti_hund);
}
