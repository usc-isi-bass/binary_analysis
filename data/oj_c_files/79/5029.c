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
	int n,m,i,j;
	int a[500];
	while (1)
	{
	scanf("%d%d",&n,&m);
	if (n==0&&m==0) break;
	for (i=0;i<n;i++)
	{
		a[i]=i+1;
	}
    j=1;
	while(n!=1)
	{
		j--;
		for (i=1;i<=m;i++)
		{
			if (j+1>n) j=1;
			else j++;
		}
		for (i=j;i<=n-1;i++)
			a[i-1]=a[i];
		n--;
	}
	printf("%d\n",a[0]);
	}
}
