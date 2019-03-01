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

move (int a[],int n,int m)
{
	int *p,i,q = 0;
	p = a + n - 1 ;
	for (; q < m;)
	{
		for(;p > a;p--)
		{
			i = *p;
			*p = *(p - 1);
			*(p - 1) = i;
		}
		q++;
		p = a + n - 1;
	}
}
main()
{
	int n, m, *p;
	int b[10000];
	scanf("%d%d",&n,&m);
	for(p = b;p < b + n;p++)
	{
		scanf("%d",p);
	}
	move (b,n,m);
	for (p = b;p < b+n-1;p++)
	{
		printf("%d ",*p);
	}
	printf("%d",*p);
}

