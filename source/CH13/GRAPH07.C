/* program graph07.c */

#include <graphics.h>
#include <stdlib.h>
main()
{
	int graphdriver=DETECT,graphmode=DETECT;
	int radius;
	initgraph(&graphdriver,&graphmode,"c:\\tc\\bgi");
	if ( graphresult() != grOk )
	{
		printf("can not graphics.\n");
		exit( 1 );
	}
	for ( radius=1 ; radius<=20 ; radius++ )
	       {arc(100,300,0,90,radius*10);
	       delay(500);
	       cleardevice();}
	getch();
	closegraph();
}
