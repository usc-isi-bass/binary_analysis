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
	int sz[100],n,i,m,j;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	int *pi=sz;
	int *pj=sz+n-1;
	for(;pi<pj;pi++,pj--)
	{
		m=*pi;
		*pi=*pj;
		*pj=m;
	}
	for(j=0;j<n-1;j++)
	{
		printf("%d ",sz[j]);
	}
	printf("%d",sz[n-1]);
	return 0;
}