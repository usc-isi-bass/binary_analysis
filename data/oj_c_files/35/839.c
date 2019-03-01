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
	int n,i,j,k,m,l=0;
	int a[8][8],b[8][8]={0};
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			for(k=0;k<m;k++)
			{
				if(a[i][j]>=a[i][k]) b[i][j]++;
			}
			for(k=0;k<n;k++)
			{
				if(a[i][j]<=a[k][j]) b[i][j]++;
			}
		}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(b[i][j]>=n+m)
			{
				l++;
				printf("%d+%d",i,j);
			}
			else continue;
		}
	if(l==0) printf("No");
}
