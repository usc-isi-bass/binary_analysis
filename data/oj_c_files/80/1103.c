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


int runnian(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
		return 366;
	else
		return 365;
}

int dijitian(int year,int month,int date)
{
	int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,sum=0;
	if(runnian(year)==366)
	{
		a[1]=29;
	}
	for(i=0;i<month-1;i++)
	{
		sum+=a[i];
	}
	sum+=date;

	return sum;
}

int main()
{
	int sy,sm,sd,ey,em,ed;
	scanf("%d %d %d",&sy,&sm,&sd);
	scanf("%d %d %d",&ey,&em,&ed);
	int sa,sb;
	sa=dijitian(sy,sm,sd);
	sb=dijitian(ey,em,ed);
	int i,days=0;
	for(i=sy;i<ey;i++)
	{
		days+=runnian(i);
	}
	days=days-sa+sb;
	printf("%d\n",days);
	return 0;	
}
