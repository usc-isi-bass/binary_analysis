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
	int a,b,i,c,days;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&a,&b,&c);
	days=0;
	if((a%4==0&&a%100!=0)||(a%400==0))
	{m[2]=29;
	for(i=0;i<b;i++)
	{days+=m[i];
	}
	printf("%d\n",days+c);
	}
	else
	{
		for(i=0;i<b;i++)
		{
			days+=m[i];
		}
		printf("%d\n",days+c);
	}
	return 0;
}
