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

void main()
{
	int w,i;//i month
	scanf("%d",&w);
	for(i=1;i<13;i++)
	{
		if((w+12)%7==5)
		{
			printf("%d\n",i);
		}
		if(i==2)
		{
			w=w;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			w=(w+2)%7;
		}
		else
		{
			w=(w+3)%7;
		}
	}
}

