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
    int a[200],i,n,m;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	    if(i<n-m)
			a[i+m+n]=a[i];
		if(i>=n-m)
			a[i+m]=a[i];
	}
	for(i=0;i<n-1;i++)
	     printf("%d ",a[i+n]);
	printf("%d",a[2*n-1]);
return 0;
}
	