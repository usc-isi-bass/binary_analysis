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
	int a[100],b,n,i,sum;
	scanf("%d",&n);
	sum=0;
	b=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	    if(sum<a[i])
		    sum=a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]<sum&&b<sum&&b<a[i])
			b=a[i];
	}
	printf("%d\n%d\n",sum,b);
	return 0;
}
