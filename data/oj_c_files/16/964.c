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
	int x,a,b,c,d;
	scanf("%d",&x);
	if(x==10000)
		printf("00001\n");
	else
	{
		a=x/1000;
		b=(x-a*1000)/100;
		c=(x-a*1000-b*100)/10;
		d=x-a*1000-b*100-c*10;
		if(a)
			printf("%d%d%d%d\n",d,c,b,a);
		else
		{
			if(b)
				printf("%d%d%d\n",d,c,b);
			else
			{
				if(c)
					printf("%d%d\n",d,c);
				else
					printf("%d\n",d);
			}
		}
	}
}
