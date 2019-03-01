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
	int n,m,i,j,sz[102];
	scanf("%d%d",&n,&m);
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&sz[i]);
        sz[0]=0;
		sz[n+1]=0;
	}
	for(j=0;j<m;j++)
	{
		for(i=n+1;i>0;i--)
		{
			sz[i]=sz[i-1];
		}
			sz[1]=sz[n+1];
	}
	for(i=1;i<n;i++)
		printf("%d ",sz[i]);
	printf("%d",sz[n]);
	return 0;
}
