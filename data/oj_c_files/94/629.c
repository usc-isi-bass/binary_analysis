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
	int i,n,t,m;
	scanf("%d",&n);
	int sz1[1000],sz[1000];
	int s=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz1[i]);
		if(sz1[i]%2==1)
		{
			sz[s]=sz1[i];
		s++;
		}
	}
		for(i=0;i<s;i++)
	{
		for(m=0;m<s-i;m++)
			if(sz[m]>sz[m+1])
			{
				t=sz[m+1];
				sz[m+1]=sz[m];
				sz[m]=t;
			}
	}
	for(i=1;i<s;i++)
		printf("%d,",sz[i]);
	printf("%d",sz[s]);
	return 0;
}