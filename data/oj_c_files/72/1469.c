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


void check(int m,int n,int h[20][20])
{
	int i,j;
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
		{
			int x=1;
			if(i!=0&&h[i][j]<h[i-1][j]) x=0;
			if(i!=m-1&&h[i][j]<h[i+1][j]) x=0;
			if(j!=0&&h[i][j]<h[i][j-1]) x=0;
			if(j!=n-1&&h[i][j]<h[i][j+1]) x=0;

			if(x==1) printf("%d %d\n",i,j);
		}
}

void main(void)
{
	int m,n,i,j,h[20][20];
	scanf("%d%d",&m,&n);

	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
			scanf("%d",&h[i][j]);

	check(m,n,h);
}