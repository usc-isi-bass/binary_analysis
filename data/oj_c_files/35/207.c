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
	int m,n,a[10][10],i,j,k,t,r,p,or,az=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			
			if(a[i][j]>k)
				k=a[i][j];
		}
		for(j=0;j<n;j++)
			if(k==a[i][j])
			{  t=i;r=j;}
		for(p=0;p<m;p++)
		{
			if(p==t)
				continue;
			else
			{if(a[p][r]>k)
				or=1;
			 else { or=0;break;}
			}
		}
		if(or==1)
			printf("%d+%d\n",t,r);
		else az++;
	}
	if(az==m)
		printf("No\n");
}
