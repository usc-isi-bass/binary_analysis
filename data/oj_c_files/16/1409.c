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
	int a,b,c,d,n;
	scanf("%d",&n);
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-b*100)/10;
	d=n-a*1000-b*100-c*10;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				printf("%d\n",d);
			}
			else
			{	
			printf("%d%d\n",d,c);
			}
		}
		else
		{
			printf("%d%d%d\n",d,c,b);
		}
	}
	else
	{
		printf("%d%d%d%d\n",d,c,b,a);
	}
	return 0;
}