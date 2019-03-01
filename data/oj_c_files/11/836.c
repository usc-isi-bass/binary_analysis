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

void main()
{
	int sum_day(int,int);
	int leap(int year);
	int year,month,day,days;
	scanf("%d%d%d",&year,&month,&day);
	days=sum_day(month,day);
	if(leap(year)&&month>=3)
		days=days+1;
	printf("%d",days);
}
int sum_day(int month,int day)
{
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=1;i<month;i++)
		day+=day_tab[i];
	return(day);
}
int leap(int year)
{
	int leap;
	leap=year%3==0&&year%100!=0||year%400==0;
	return(leap);
}
		
		
