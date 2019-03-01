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
	int a[100000],n,i,k,*p,*q;
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
	}
	scanf("%d",&k);
	p=a;
	for (p=a;p<a+n;p++)
	{
		if (*p==k)
		{
			for (q=p;q<a+n;q++)
			{
				*q=*(q+1);
			}
			p--;
			n--;
		}
	}
	for (q=a;q<a+n-1;q++)
	{
		printf("%d ",*q);
	}
	printf("%d",*(a+n-1));
	return 0;
}