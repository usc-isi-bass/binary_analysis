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
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mun,day,year,i;
	int days=0;
	scanf("%d%d%d",&year,&mun,&day);
	days+=day;
	for(i=1;i<mun;i++)
	{
		days+=a[i];
		if(year%4==0&&year%100!=0||year%400==0)
			days+=1;
		
	}
     printf("%d",days);
	return 0;
}