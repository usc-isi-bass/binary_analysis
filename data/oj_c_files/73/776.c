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
	int i,j,m,n,t=0,a[5][5],p;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	{
		m=0;
		for(j=0;j<5;j++)
		{
			if(a[i][m]<=a[i][j])
			{
				m=j;
				p=i;
			}
		}
		n=0;
		for(j=0;j<5;j++)
		{
		    if(a[n][m]>=a[j][m]) n=j;
		}
		if(p==n)
		{
			t++;
			printf("%d %d %d",n+1,m+1,a[n][m]);
		}
	}
	if(t==0) printf("not found");
	return 0;
}
