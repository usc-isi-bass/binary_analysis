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

int main ()
{
	int n,i,j,a[1000][1000],m=0,p,q;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==0&&a[i][j+1]!=0)
				break;
		}
		p=j;
	    for(j=n;j>=0;j--)
		{
			if(a[i][j]==0&&a[i][j-1]!=0)
				break;
		}
		q=j;
		if(q>p)
			m=m+q-p-1;
	}
	printf("%d\n",m);
	return 0;
}