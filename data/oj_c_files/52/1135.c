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
	int n,m,a[200],*p;
	scanf("%d %d",&n,&m);
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
	}
	p=a;
	for(p=a;p<&a[n-m];p++)
	{
		*(p+n)=*p;
	}
	for(p=a;p<&a[n];p++)
	{
		*p=*(n-m+p);
	}
	for(p=a;p<&a[n];p++)
	{
		if(p==a)
		{
			printf("%d",*p);
		}
		else
		{
			printf(" %d",*p);
		}
	}
}