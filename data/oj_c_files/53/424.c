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
	int n,i,j,x,m=0,a[500];
	scanf("%d",&n);
	scanf("%d",&a[0]);
	printf("%d",a[0]);
	for (i=1;i<n;i++)
	{
		scanf("%d",&x);
		for(j=0;j<=m;j++)
		{
			if (x==a[j]) break;
		}
		if (j>m)
		{
			m++;
			a[j]=x;
			printf(",%d",x);
		}
	}
}
