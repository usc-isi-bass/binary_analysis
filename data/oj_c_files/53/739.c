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
	int n,a[300];
	int *p,*q;
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
	}
	p=a;
	printf("%d",*p);
	for(p=a+1;p<a+n;p++)
	{
		for(q=a;q<=p;q++)
		{
			if(*p==*q)
			{
				break;
			}
		}
			if(q==p)
			{
				printf(",%d",*p);
				continue;
			}
	}
}
