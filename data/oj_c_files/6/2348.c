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
	int i,j,k,t,m,n,x,sum,a[100][105][105];
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		sum=0;
		scanf("%d %d",&m,&n);
		for(j=1;j<=m;j++)
			for(k=1;k<=n;k++)
				scanf("%d",&a[i][j][k]);
		for(t=1;t<=n;t++)
		{
			if(m!=1)
				sum=sum+a[i][1][t]+a[i][m][t];
			if(m==1)
				sum=sum+a[i][1][t];
		}
		for(t=2;t<=m-1;t++)
		{
			if(n!=1)
				sum=sum+a[i][t][1]+a[i][t][n];
			if(n==1)
				sum=sum+a[i][t][1];
		}
		printf("%d\n",sum);
	}
}
