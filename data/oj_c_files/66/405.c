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
	int j,year,month,day,runnian=0,pingnian=0;
	int sumday=0,xingqiji;
	scanf("%d %d %d",&year,&month,&day);
	sumday=(year-1)*(365%7)+(year-1)/4-(year-1)/100+(year-1)/400;
	for(j=1;j<month;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10)
		{
			sumday+=3;
		}
		else if(j==4||j==6||j==9||j==11)
		{
			sumday+=2;
		}
		else if(j==2)
		{
			if((year%4==0&&year%100!=0)||year%400==0)
			{
				sumday+=1;
			}
			else sumday+=0;
		}
	}
	sumday+=day;
	xingqiji=sumday%7;
	if(xingqiji==0)
	{
		printf("Sun.");
	}
	else if(xingqiji==1)
	{
		printf("Mon.");
	}
	else if(xingqiji==2)
	{
		printf("Tue.");
	}
	else if(xingqiji==3)
	{
		printf("Wed.");
	}
	else if(xingqiji==4)
	{
		printf("Thu.");
	}
	else if(xingqiji==5)
	{
		printf("Fri.");
	}
	else printf("Sat.");
	return 0;
}
