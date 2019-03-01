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
	int n,m,i,a[1000],b,k=0,tmp,j;
	scanf("%d%d",&n,&m);
	for (i=1;i<=n+m;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=1;i<=n+1;i++)
		for (j=1;j<=n-1;j++)
			if (a[j]>a[j+1])
		    {
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
		    }
	for (i=1;i<=m+1;i++)
		for (j=n+1;j<=n+m-1;j++)
			if (a[j]>a[j+1])
		    {
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
		    }
    printf("%d",a[1]);
	for (i=2;i<=n+m;i++)
		printf(" %d",a[i]);
}