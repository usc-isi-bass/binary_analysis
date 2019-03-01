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
	int n,i,k,a[100000],*p,*q;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
		scanf("%d ",&a[i]);
	scanf("%d",&a[n-1]);
	scanf("%d",&k);
	p=a;
	for(i=0;i<n;i++,p++)
	{
		if(*p==k)
		{
			for(q=p;q<a+n;q++)
				*(q)=*(q+1);
			i--;
			n--;
			p--;
		}
	}
	p=a;
	printf("%d",*p);
	for(i=1;i<n;i++)
		printf(" %d",*(p+i));

}