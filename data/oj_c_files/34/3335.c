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


int function(int a)
{
	int b;
	if(a%2==1)
	{
		b=3*a+1;
		printf("%d*3+1=%d\n",a,b);
		return b;
	}
	else if(a%2==0)
	{
		b=a/2;
		printf("%d/2=%d\n",a,b);
		return b;
	}
}


void main()
{
	int n;
	scanf("%d",&n);
	if(n==1)
		printf("End\n");
	else
	{
		while(1)
		{
			n=function(n);
			if(n==1)
			{printf("End\n");break;}
		}
	}
}