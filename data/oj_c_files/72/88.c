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
	int m,n,i,j,a[20][20],b[20][20],x[20][20];
	scanf("%d%d",&m,&n);
	for(i=0;i<20;i++)
		for(j=0;j<20;j++)
		{
			a[i][j]=0;b[i][j]=0;
		}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&x[i][j]);

		for(j=1;j<n-1;j++)
		{
			if((x[0][j]>=x[0][j-1])&&(x[0][j]>=x[0][j+1])&&(x[0][j]>=x[1][j]))
			{b[0][j]=j;}
			if((x[m-1][j]>=x[m-1][j-1])&&(x[m-1][j]>x[m-1][j+1])&&(x[m-1][j]>=x[m-2][j]))
			{a[m-1][j]=m-1;b[m-1][j]=j;}
		}
	
		for(i=1;i<m-1;i++)
		{
			if((x[i][0]>=x[i-1][0])&&(x[i][0]>=x[i+1][0])&&(x[i][0]>=x[i][1]))
			{a[i][0]=i;}
			if((x[i][n-1]>=x[i-1][n-1])&&(x[i][n-1]>=x[i+1][n-1])&&(x[i][n-1]>=x[i][n-2]))
			{a[i][n-1]=i;b[i][n-1]=n-1;}
		}
		for(i=1;i<m-1;i++)
			for(j=1;j<n-1;j++)
			{if((x[i][j]>=x[i-1][j])&&(x[i][j]>=x[i][j-1])&&(x[i][j]>=x[i][j+1])&&(x[i][j]>=x[i+1][j]))
			{
				a[i][j]=i;
				b[i][j]=j;
			}
			}
	if((x[0][n-1]>=x[0][n-2])&&(x[0][n-1]>=x[1][n-1]))
	{b[0][n-1]=n-1;}
	if((x[m-1][0]>=x[m-1][1])&&(x[m-1][0]>=x[m-2][0]))
	{a[m-1][0]=m-1;}
	if((x[m-1][n-1]>=x[m-1][n-2])&&(x[m-1][n-1]>=x[m-2][n-1]))
	{a[m-1][n-1]=m-1;b[m-1][n-1]=n-1;}
	if((x[0][0]>=x[0][1])&&(x[0][0]>=x[1][0]))printf("0 0\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if((a[i][j]!=0)||(b[i][j]!=0))
				printf("%d %d\n",a[i][j],b[i][j]);
}
			
