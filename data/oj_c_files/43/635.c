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
	int i,j,n,sqrti,m=0,a[10000];
	scanf("%d",&n);
	for(i=3;i<=n;i+=2)
	{
		sqrti=(int)sqrt(i);
		for(j=3;j<=sqrti;j+=2)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrti)
		{
			a[m]=i;
			m++;
		}
	}
	for(i=0;i<=m;i++)
	{
		for(j=i;j<=m;j++)
			if(n==a[i]+a[j])
			{
				printf("%d %d\n",a[i],a[j]);
			}
	}
}

