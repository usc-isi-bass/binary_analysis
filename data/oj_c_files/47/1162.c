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
	int a[100],i,n,j,e,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<(n/2);j++)
	{
		e=a[j];
        a[j]=a[n-1-j];
		a[n-1-j]=e;
	    printf("%d ",a[j]);
	}
	for(m=n/2;m<n-1;m++)
	{
		printf("%d ",a[m]);
	}
	printf("%d",a[n-1]);
	return 0;
}
