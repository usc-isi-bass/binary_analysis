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

int main ( )
{
	int n,year,a,b,i,j,Temp,days=0;
	int Month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int Month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf ("%d",&n);
	for (i=0;i < n;i++)
	{
		scanf("%d%d%d",&year,&a,&b);
		if (a>b){
                           Temp=a;
			a=b;
			b=Temp;
		}
		if( year%400==0 || (year%4==0 && year%100!=0))
		{
			days=0;
			for(j=a;j<b;j++)
				days=days +Month2[j];
		}
		else
		{
			days=0;
			for(j=a;j<b;j++)
				days=days +Month1[j];
		}
		if(days%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}