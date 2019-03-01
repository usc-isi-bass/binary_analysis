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
	int a[110][110]={0},b[110][110]={0},c[110][110]={0};
	int x1,y1,x2,y2,i,j,k;
	scanf("%d%d", &x1, &y1);
    for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y1;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d%d", &x2, &y2);
    for(i=1;i<=x2;i++)
	{
		for(j=1;j<=y2;j++)
		{
			scanf("%d", &b[i][j]);
		}
		
	}
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			for(k=1;k<=y1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
			if(j==1) printf("%d", c[i][j]);
			else printf(" %d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
