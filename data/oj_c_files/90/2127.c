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

int main()
{
	int t,m,n,i,j,l;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		scanf("%d %d",&m,&n);
		int a[100][100];
		for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(i==1) a[i][j]=1;
			else if(j==1) a[i][j]=1;
			else if(i==j) a[i][j]=a[i][j-1]+1;
			else if(i<j)  a[i][j]=a[i][j-1];
			else if(j<i)  a[i][j]=a[i][j-1]+a[i-j][j];
		}
		printf("%d\n",a[m][n]);
	}
} 