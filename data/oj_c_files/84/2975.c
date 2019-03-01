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
	long int k,i=0,a,b,c=0,d;
	scanf("%d\n",&k);
	k=k-1;
	for (;i<=k;i++)
	{
		scanf("%d\n",&a);
		if(a<b)
		{
			if(a>c)
				c=a,b=b;
			else
				c=c,b=b;
		}
		else
			if (d>c)
				c=b,b=a;
			else
				c=c,b=a;
	}
	printf("%ld\n%ld\n",b,c);
}