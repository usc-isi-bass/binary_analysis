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
	int m,n,i,j;
	int a[25][25]={0};
	scanf ("%d %d",&m,&n);
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n+1;j++)
			if (j!=n+1)
				scanf ("%d",&a[i][j]);
	}
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (a[i][j]>=a[i-1][j] && a[i][j]>=a[i+1][j] && a[i][j]>=a[i][j-1] && a[i][j]>=a[i][j+1] && a[i][j]!=0)
				printf ("%d %d\n",i-1,j-1);
		}
	}
	return 0;
}