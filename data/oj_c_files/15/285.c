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
	int a[100][100];
	int n,i1=0,j1=0,i2=0,j2=0,j,i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for (i=0;i<n;i++)
	{
		if (i1!=0) break;
		for (j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				i1=i+1;j1=j+1;break;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				i2=i+1;j2=j+1;
			}
		}
	}
	printf("%d",(i2-i1-1)*(j2-j1-1));
}