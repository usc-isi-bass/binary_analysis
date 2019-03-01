#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
	int *x, y;
	int i;
	x=malloc(4*sizeof(int));
	for(i=0; i<4; i++)
	{
		scanf("%d", x+i);
	}
	for(i=0; i<4; i++)
	{
		y=*(x+i);
		while(y!=0)
	{
		printf("%d", y % 10);
		y = y / 10;
	}
		printf("\n");
	}
	
	return 0;
}
