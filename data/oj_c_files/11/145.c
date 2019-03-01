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
	int a,b,c;
	int d=0;
	int x[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	int y[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&a,&b,&c);
	int i;
	if((a%4==0&&a%100!=0)||(a%100==0&&a%400==0))
	{
		for(i=1;i<b;i++)
		{
			d=d+y[i];
		}
		printf("%d",d+c);
	}
	else
	{
        for(i=1;i<b;i++)
		{
			d=d+x[i];
		}
		printf("%d",d+c);
	}
	return 0;
}
		

