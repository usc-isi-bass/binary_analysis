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
	int m,n,i,j,t,a[100][100],max;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		for(j=1;j<m;j++)
			if(a[i][j]>max) max=a[i][j];
		for(j=0;j<m;j++)
		{
			if(a[i][j]==max)
			{
				for(t=0;t<n;t++)
					if(a[t][j]<a[i][j])break;
					if(t==n)
					{printf("%d+%d",i,j);break;}
			}
		}
		if(t==n)break;
	}
    if(i==n)printf("No");
}
