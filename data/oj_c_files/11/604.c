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
	int m,n,p,a;
	scanf("%d%d%d",&m,&n,&p);
	if (m%4!=0||(m%100==0&&m%400!=0))
	{
	if(n==1)
	{
		a=p;
	}
	else if ((n+1)%2==0&&(n+1)>9)
	{
	a=61*(n-1)/2-1+p;
	}
	else if((n-1)%2==0&&(n+1)<9)
	{
	a=61*(n-1)/2-2+p;
	
	}
else if(n==2)
	{
		a=31+p;
	}
	
		
		else
	{
		a=61*(n-2)/2+29+p;
	}

	}
	else
{
	if((n-1)%2==0&&(n+1)<9)
	{
	a=61*(n-1)/2-1+p;
	
	}
	else if ((n+1)%2==0&&(n+1)>9)
	{
	a=61*(n-1)/2+p;
	}
	else if(n==1)
	{
		a=p;
	}
else if(n==2)
	{
		a=31+p;
	}
	
		
		else
	{
		a=61*(n-2)/2+30+p;
	}

	}
	
	
	printf("%d",a);
	return 0;
}

