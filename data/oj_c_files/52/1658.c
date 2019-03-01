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
	int i,m,n,a[100],*out[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		out[i]=&a[n-m+i];
	}
	for(i=m;i<n;i++)
	{
		out[i]=&a[i-m];
	}
	for(i=0;i<n-1;i++)
	{
	    printf("%d ",*out[i]);
	}
    printf("%d",*out[n-1]);
}


