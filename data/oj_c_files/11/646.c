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

int main(){
	int i,year,month,day,n=0;
	int dayofmonth1[12]={31,28,31,30,31,30,31,31,30,31,30,31},dayofmonth2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&year,&month,&day);
	if(year%4!=0||(year%100==0&&year%400!=0))
	{
		for(i=0;i<month-1;i++)
		{
			n+=dayofmonth1[i];
		}
		n=n+day;
		printf("%d",n);
	}
	else if((year%4==0&&year%100!=0)||year%400==0)
	{
		for(i=0;i<month-1;i++)
		{
			n+=dayofmonth2[i];
		}
		n=n+day;
		printf("%d",n);
	}
	return 0;
}
	