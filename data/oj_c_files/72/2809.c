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
	int m,n,i,j,a[20][20];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==0)
				{
					if(j==0 && a[i][j]>=a[i][j+1] && a[i][j]>=a[i+1][j]) P;
					else if(j==n-1 && a[i][j]>=a[i][j-1] && a[i][j]>=a[i+1][j]) P;
					else if(a[i][j]>=a[i][j-1] && a[i][j]>=a[i][j+1] && a[i][j]>=a[i+1][j]) P;
				}
				else if(i==m-1)
				{
					if(j==0 && a[i][j]>=a[i][j+1] && a[i][j]>=a[i-1][j]) P;
					else if(j==n-1 && a[i][j]>=a[i][j-1] && a[i][j]>=a[i-1][j]) P;
					else if(a[i][j]>=a[i][j-1] && a[i][j]>=a[i][j+1] && a[i][j]>=a[i-1][j]) P;
				}
				else
				{
					if(j==0 && a[i][j]>=a[i][j+1] && a[i][j]>=a[i-1][j] && a[i][j]>=a[i+1][j]) P;
					else if(j==n-1 && a[i][j]>=a[i][j-1] && a[i][j]>=a[i-1][j] && a[i][j]>=a[i+1][j]) P;
					else if(a[i][j]>=a[i][j-1] && a[i][j]>=a[i][j+1] && a[i][j]>=a[i-1][j] && a[i][j]>=a[i+1][j]) P;
				}
			}
		}
}


