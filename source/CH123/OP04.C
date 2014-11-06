/* program op04.c */
/* demo sizeof operator */

int main()
{
	int i;
	float j;
	long k;
	printf("Integer occupied %d bytes\n",sizeof(i) );
	printf("Float occupied %d bytes\n",sizeof(j) );
	printf("Long int occupied %d bytes\n",sizeof(k) );
	printf("Double occupied %d bytes\n",sizeof(double) );
	printf("int occupied %d bytes\n",sizeof(int) );
}
