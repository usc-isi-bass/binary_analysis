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
	int year,month,date;
	int sum=0;
	scanf("%d%d%d",&year,&month,&date);
	int temp;
	if(year%4!=0)
		{
		temp=28;//not
		}
		else if(year%100!=0)
		{
			temp=29;//yes
		}
		else if(year%400!=0)
		{
			temp=28;//not
		}
		else
		{
			temp=29;//yes
		}//???????
		int a[12]={31,temp,31,30,31,30,31,31,30,31,30,31};
		int i;
		for(i=0;i<month-1;i++)
		{
			sum+=a[i];
		}
		sum+=date;
		printf("%d",sum);
		return 0;
}
