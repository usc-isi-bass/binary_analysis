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
	int n,a,b,c,d;
	scanf("%d",&n);
	if (n==10000)
	{
		n=00001;
	}
	else 
	{
		if(n>=1000)
		{
			a=n%10;
			b=(n-a)%100/10;
			d=n/1000;
			c=n/100-d*10;
			printf("%d",a);
			printf("%d",b);
			printf("%d",c);
			printf("%d",d);
		}
		else
		{
			if(n>=100)
			{
				a=n%10;
				b=(n-a)%100/10;
				c=n/100;
				printf("%d",a);
				printf("%d",b);
				printf("%d",c);
			}
			else 
			{
				if(n>=10)
				{
					a=n%10;
					b=n/10;
					printf("%d",a);
					printf("%d",b);
				}
				else
				{
					printf("%d",n);
				}
			}
		}
	}
	return 0;
}
				
