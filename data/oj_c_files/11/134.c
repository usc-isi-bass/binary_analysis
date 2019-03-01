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

int main(int argc, char* argv[])
{
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,i,days=0;
	scanf("%d%d%d",&year,&month,&day);
    for(i=1;i<month;i++)
	{
		days=days+d[i-1];
	}
	days=days+day;
	if((year%4==0||year%400==0)&&month>2)
		days=days++;
	printf("%d",days);
}

