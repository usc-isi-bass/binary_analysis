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
	int year, month, day;
	int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d", &year, &month, &day);
	int i;
	int sum=0;
	for(i=1; i<month; i++)
	{
		sum=sum+monthday[i-1];
	}
	sum=sum+day;
	int a;
	a=year%4;
	if(month>2 && (a==0 && year%100!=0 || year%400==0))
	{
		sum=sum+1;
	}
	printf("%d", sum);
	return 0;
}