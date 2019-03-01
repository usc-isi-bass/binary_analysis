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
	int montable[12]={0,3,3,6,1,4,6,2,5,0,3,5};
	char print[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	int sumday;
	int i;

	sumday=0;
	scanf("%d%d%d",&year,&month,&day);

	year%=400;
	if (year) sumday=year+6;
	else sumday+=5;

	
	

	for (i=1;i<year;i++)
	{
		if (i%4==0&&i%100!=0)
		{
			sumday++;
			continue;
		}
	}

	sumday+=montable[month-1];
	

	if (((year%4==0&&year%100!=0)||year%400==0)&&month>2)
	{
		sumday++;
	}

	sumday+=day;

	printf("%s",print[sumday%7]);


	return 0;
}

