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
	int a[100],b[100],n,m,i,o,k,u,l;
	int *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for(l=0;l<m;l++)
	{
		b[l]=*(p+n-m+l);
	}
	for(o=n-m-1;o>=0;o--)
	{
		*(p+o+m)=*(p+o);
	}
	for(k=0;k<m;k++)
	{
		*(p+k)=b[k];
	}
	printf("%d",a[0]);
	for(u=1;u<n;u++)
	{
		printf(" %d",a[u]);
	}
	return 0;
}

