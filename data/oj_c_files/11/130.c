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
	int year,month,day,i;
	scanf("%d %d %d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		int d[12]={0,31,29,31,30,31,30,31,31,30,31,30};
		for(i=0;i<month;i++)
		{
		    day=day+d[i];
		}
	
	}
	else
	{
		int d[12]={0,31,28,31,30,31,30,31,31,30,31,30};
        for(i=0;i<month;i++)
		{
		   day=day+d[i];
		}
	}
	printf("%d",day);
	return 0;
}