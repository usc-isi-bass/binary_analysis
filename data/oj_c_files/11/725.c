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
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int sum=0,i;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			sum+=31;
		else if(i==4||i==6||i==9||i==11)
			sum+=30;
		else if(i==2)
		{
			if(year%400==0||(year%4==0&&year%100!=0))
				sum+=29;
			else
				sum+=28;
		}
	}
	sum+=day;
	printf("%d\n",sum);
	return 0;
}