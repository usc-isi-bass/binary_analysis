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


void main()
{
	int m, a,b,c,d,sum=0;
	
	scanf("%d",&m);
	if (m%3==0)
		a=1;
	else a=0;
	if (m%5==0)
		b=1;
	else b=0;
	if (m%7==0)
		c=1;
	else c=0;
	
	sum=a+b+c;
	
	if (sum==3)
		printf("3 5 7\n");
	else
		if (sum==2)
		{
			if (a==b)
				printf("3 5");
			else
				if (a==c)
					printf("3 7");
				else printf("5 7");
		}
		else
			if (sum==1)
			{
				d=a*3+b*5+c*7;
				printf("%d\n",d);
			}
			else printf("n\n");

}