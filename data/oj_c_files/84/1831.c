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
	int n,i,k,l,p,q;
	int a[100];
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(k=1;k<=n-1;k++)
	{
		if(a[0]<a[k])
		{
			p=a[k];
			a[k]=a[0];
			a[0]=p;
		}
	}
	printf("%d\n",a[0]);
	for(l=2;l<=k;l++)
	{
		if(a[1]<a[l])
		{
			q=a[l];
			a[l]=a[1];
			a[1]=q;
		}
	}
	printf("%d\n",a[1]);
	return 0;
}