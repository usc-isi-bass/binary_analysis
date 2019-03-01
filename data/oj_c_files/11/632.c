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

int leap(int year)
{
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
		return(1);
	else 
		return(0);
}
void main()
{
	int year,month,day,leap1,answer=0,i;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&year,&month,&day);
    leap1=leap(year);
    if(leap1==1)
	{
	    for(i=1;i<month;i++)
		{
			answer+=b[i];
		}
		answer+=day;
	}
	else
	{
		for(i=1;i<month;i++)
		{
			answer+=a[i];
		}
		answer+=day;
	}
	printf("%d",answer);
}