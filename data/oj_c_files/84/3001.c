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
	int i,n,max=0,b=0,c,a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max) max=a[i];
	}
	printf("%d\n",max);
	c=max;
    for(i=0;i<n;i++)
	{
		if(a[i]>b&&a[i]<c) b=a[i];
	}
	printf("%d",b);
}
