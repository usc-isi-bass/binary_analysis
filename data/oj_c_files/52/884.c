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
	int m,n,i,a[100],b[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		if(i<m)
			a[i]=a[n-m+i];
		else
            a[i]=b[i-m];
	}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
		if(i=n-1)
		printf("%d",a[n-1]);
	return 0;
}