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
	int sz[100],n,m,j;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	printf("%d",sz[n-m]);
     for(j=m-2;j>=0;j--)
	{
	    printf(" %d",sz[n-1-j]);
	}
	for(int a=m+1;a<=n;a++)
	{
		printf(" %d",sz[a-m-1]);
	}
	
	return 0;
}
