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
	int a[100][100];
	int m, n, i, j, r;
	long flag=0;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
	for (r=0;r<m+n-1;r++)
	{
		for (i=0;i<=r&&flag<m*n;i++)
		{
			if (i<m&&r-i<n)
			{
				printf("%d\n",a[i][r-i]);
				flag++;
			}
		}
	}
	return 0;
}

