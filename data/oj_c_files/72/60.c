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
	int m,n,a[22][22]={0};
	int i,j,t;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			t=a[i][j];
			if(t>=a[i-1][j]&&t>=a[i][j-1]&&t>=a[i+1][j]&&t>=a[i][j+1])
				printf("%d %d\n",i-1,j-1);
		}
	}
	return 0;
}