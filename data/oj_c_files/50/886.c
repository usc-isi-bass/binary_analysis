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
	int w,i,j;
	scanf("%d",&w);
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int day[13];
	day[1]=13;
	for(i=2;i<13;i++)
	{
		
		day[i]=day[i-1]+month[i-1];
	}

	for(i=1;i<13;i++)
	{
		if((day[i]+w-1)%7==5)
			printf("%d\n",i);
	    else continue;
	}
	return 0;
}
