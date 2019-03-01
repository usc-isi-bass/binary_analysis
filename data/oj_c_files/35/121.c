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
	int n,m,i,j,max,maxj,flag,a[8][8],k;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
			scanf("%d ",&a[i][j]);
		scanf("%d\n",&a[i][m-1]);
	}
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		maxj=0;
		for(j=0;j<m;j++)
		
			if(a[i][j]>max)
			{
				max=a[i][j];
				maxj=j;
			}
		
			flag=1;
			for(k=0;k<n;k++)
			
				if(max>a[k][maxj])
				{
					flag=0;
					continue;
				}
			
			if(flag==1)
			{
				printf("%d+%d",i,maxj);
				break;
			}
		
	}
	if(flag==0)
		printf("No");
}