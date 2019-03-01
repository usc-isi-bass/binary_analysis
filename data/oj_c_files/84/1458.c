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
	int a,b,c,d,e,f,i,j,k,n,sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(sz[i]>sz[i+1])
		{
			int tmp;
			tmp=sz[i+1];
			sz[i+1]=sz[i];
			sz[i]=tmp;
		}
	}
	printf("%d\n",sz[n-1]);
	for(i=0;i<n-2;i++)
	{
		if(sz[i]>sz[i+1])
		{
			int tmp;
			tmp=sz[i+1];
			sz[i+1]=sz[i];
			sz[i]=tmp;
		}
	}
	printf("%d\n",sz[n-2]);
	return 0;
}