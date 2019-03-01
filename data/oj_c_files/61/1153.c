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
	int n,i,j,a[20],b[20];
	a[0]=a[1]=1;
	for(i=2;i<20;i++)
		a[i]=a[i-1]+a[i-2];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=1;j<21;j++)
		{
			if(b[i]==j)
				printf("%d\n",a[j-1]);
		}
	}
	return 0;
}