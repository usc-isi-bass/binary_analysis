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
	int n,i;
	scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	int *sf=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		sf[n-1-i]=sz[i];
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			printf("%d ",sf[i]);
		}
		if(i==n-1)
		{
			printf("%d",sf[i]);
		}
	}
	return 0;
}