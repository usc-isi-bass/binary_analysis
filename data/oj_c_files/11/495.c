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
	int year,month,day;
	int n;

	scanf("%d%d%d",&year,&month,&day);

	if((year%4==0&&year%100!=0)||year%400==0)
	{
		if(month==1)
		{
			n=day;
			printf("%d",n);
		}
		if(month==2)
		{
			n=31+day;
		    printf("%d",n);
		}
		if(month==3)
		{
			n=31+29+day;
		    printf("%d",n);
		}
		if(month==4)
		{
			n=31+29+31+day;
		    printf("%d",n);
		}	
		if(month==5)
		{
			n=31+29+31+30+day;
		    printf("%d",n);
		}
		if(month==6)
		{
			n=31+29+31+30+31+day;
		    printf("%d",n);
		}
		if(month==7)
		{
			n=31+29+31+30+31+30+day;
		    printf("%d",n);
		}
		if(month==8)
		{
			n=31+29+31+30+31+30+31+day;
		    printf("%d",n);
		}
		if(month==9)
		{
			n=31+29+31+30+31+30+31+31+day;
		    printf("%d",n);
		}
		if(month==10)
		{
			n=31+29+31+30+31+30+31+31+30+day;
		    printf("%d",n);
		}
		if(month==11)
		{
			n=31+29+31+30+31+30+31+31+30+31+day;
		    printf("%d",n);
		}
		if(month==12)
		{
			n=31+29+31+30+31+30+31+31+30+31+30+day;
		    printf("%d",n);
		}
	}
	else
	{
		if(month==1)
		{
			n=day;
			printf("%d",n);
		}
		if(month==2)
		{
			n=31+day;
		    printf("%d",n);
		}
		if(month==3)
		{
			n=31+28+day;
		    printf("%d",n);
		}
		if(month==4)
		{
			n=31+28+31+day;
		    printf("%d",n);
		}	
		if(month==5)
		{
			n=31+28+31+30+day;
		    printf("%d",n);
		}
		if(month==6)
		{
			n=31+28+31+30+31+day;
		    printf("%d",n);
		}
		if(month==7)
		{
			n=31+28+31+30+31+30+day;
		    printf("%d",n);
		}
		if(month==8)
		{
			n=31+28+31+30+31+30+31+day;
		    printf("%d",n);
		}
		if(month==9)
		{
			n=31+28+31+30+31+30+31+31+day;
		    printf("%d",n);
		}
		if(month==10)
		{
			n=31+28+31+30+31+30+31+31+30+day;
		    printf("%d",n);
		}
		if(month==11)
		{
			n=31+28+31+30+31+30+31+31+30+31+day;
		    printf("%d",n);
		}
		if(month==12)
		{
			n=31+28+31+30+31+30+31+31+30+31+30+day;
		    printf("%d",n);
		}
	}
	return 0;
}
