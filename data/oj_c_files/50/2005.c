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


void main(void)
{
	int w;
	scanf("%d",&w);

	int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	int d=12+w,i;
	for(i=1;i<=12;i++)
	{
		d=d+day[i-1];
		if(d%7==5)
			printf("%d\n",i);
	}
}