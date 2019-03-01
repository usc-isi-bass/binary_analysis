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
	int w,t=0,a;
	int month_days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&w);
	for (int i=1;i<=12;i++)
	{
		t+=month_days[i-1];
		a=t+w+12;
		if(a%7==5)
		{
			printf("%d\n",i);
		}

	}
	return 0;

}
