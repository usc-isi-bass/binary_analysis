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
	int i,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0,days,year,month;
	scanf("%d%d%d",&year,&month,&days);
    for(i=0;i<month-1;i++)
	{	sum=sum+a[i];}
	sum=sum+days;
	if((month==2&&days>=28)||(month>2))
	{
	     if((year%4==0&&year%100!=0)||(year%400==0))
	          sum=sum+1;
	}
	printf("%d\n",sum);
	return 0;
}

