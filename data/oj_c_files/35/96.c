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
	int a[8][8],i,j,k,m,n,max[8]={0},p=12;
	scanf("%d,%d",&m,&n);
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
			if(max[i]<a[i][j])
				max[i]=a[i][j];
		}
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==max[i])
			{
				for(k=0;k<=m;k++)
				{
					if(k<m&&a[i][j]>a[k][j])
				    break;
					if(k==m)
					{
						printf("%d+%d",i,j);
						p=i;
					}
				}
			}
		}
	}
	if(p==12)
		printf("No");
}