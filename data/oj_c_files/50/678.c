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
	int day[12];
	day[1]=31;
	day[2]=28;
	day[3]=31;
	day[4]=30;
	day[5]=31;
	day[6]=30;
	day[7]=31;
	day[8]=31;
	day[9]=30;
	day[10]=31;
	day[11]=30;
	day[12]=31;
	int n,i,s=12,a=0;
	scanf("%d",&n);
        if(n+5>7&&n+5-7==5)
	printf("1\n");
       for(i=2;i<=12;i++)
	{
		s+=day[i-1];
		a=n+s%7;
		if(a>7&&a-7==5)
			printf("%d\n",i);
		if(a==5)
			printf("%d\n",i);
	}
       return 0;
}