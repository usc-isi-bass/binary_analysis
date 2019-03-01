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
	int a[100],b[100];
	int x=0,n,i,j,k;
    scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	for (j=0;j<=n-1;j++)
	{
		for (k=0;k<=n-1;k++)
		{
			if(a[j]>=a[k]) x++;
		}
		x--;
		b[x]=a[j];
		x=0;
	}
	printf("%d\n%d\n",b[n-1],b[n-2]);
}