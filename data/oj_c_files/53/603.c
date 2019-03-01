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

del(int a[],int n)
{
	int *p,*q;
	int i =0;
	int b[10000];
	p = a+1;
	q = a;
	printf("%d",a[0]);
	for (;p < a + n;p++)
	{
		for(; q < p;q++)
		{
			if (*q == *p)
			{
				q = a;
				break;
			}
		}
		if (q == p)
		{
			b[i++] = *p;
			printf(",%d",*p);
		}
		q = a;
	}
}
main()
{
	int a[10000] ;
	int n;
	int *p = a;
	scanf("%d",&n);
	for (;p <a+n;p++)
	{
	  scanf("%d",p);
	}
	del(a,n);
}