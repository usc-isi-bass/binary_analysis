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
	int a,b,c,d,e=3,f=5,g=7;
	char c1;
	scanf("%d",&a);
	b=a%3;c=a%5;d=a%7;
	c1='n';
	if (b==0)
		if (c==0)
		{
			if (d==0)
				printf("%d %d %d\n",e,f,g);
			else
				printf("%d %d\n",e,f);
		}
		else
		{
			if (d==0)
				printf("%d %d\n",e,g);
			else
				printf("%d\n",e);
		}
	else
		if (c==0)
		{
			if (d==0)
				printf("%d %d\n",f,g);
			else
				printf("%d\n",f);
		}

        else
		{
			if (d==0)
				printf("%d\n",g);
			else
				printf("%c\n",c1);
		}
}