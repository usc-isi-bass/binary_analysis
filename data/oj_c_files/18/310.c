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
	int n,i,j,k,l,min,p,sum;
	int a[100][100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		sum=0;
		for (j=0;j<n;j++)
		{
			for (k=0;k<n;k++)
				scanf("%d",&a[j][k]);
		}
		for (l=n;l>1;l--)
		{
			for (j=0;j<l;j++)
			{
				min=a[j][0];
				for (k=1;k<l;k++)
				{
					if (a[j][k]<min)
						min=a[j][k];
				}
				for (k=0;k<l;k++)
					a[j][k]=a[j][k]-min;
			}
			for (j=0;j<l;j++)
			{
				min=a[0][j];
				for (k=1;k<l;k++)
				{
					if (a[k][j]<min)
						min=a[k][j];
				}
				for (k=0;k<l;k++)
					a[k][j]=a[k][j]-min;
			}
			sum=sum+a[1][1];
			for (j=0;j<l;j++)
			{
				for (k=1;k<l-1;k++)
					a[j][k]=a[j][k+1];
			}
			for (j=0;j<l-1;j++)
			{
				for (k=1;k<l-1;k++)
					a[k][j]=a[k+1][j];
			}
		}
		printf("%d\n",sum);
	}	
}