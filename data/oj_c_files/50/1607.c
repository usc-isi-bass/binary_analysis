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

int sz[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int day;
	scanf("%d",&day);

	day=6-day;
	if(day<=0)
	{day=day+7;}

	int sum=0;
	int i;
	for(i=1;i<=12;i++)
	{
		if((sum+13-day)%7==0)
		{
			printf("%d\n",i);
		}
		sum=sum+sz[i];
	}
	return 0;
}