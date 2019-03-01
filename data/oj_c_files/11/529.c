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
	int year,month,day,n,i,t=0;
	scanf("%d%d%d",&year,&month,&day);
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<month;i++)
	{
		t=t+a[i];
	}
	if(month>=3)
		if(year%4==0)
			if(year%100==0)
				if(year%400==0)
					n=t+1+day;
				else
					n=t+day;
				else
					n=t+1+day;
				else
					n=t+day;
				else
					n=t+day;

	printf("%d",n);
	return 0;			
			
}