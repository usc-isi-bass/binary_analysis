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
	int n,k,s;
	int i,a;
	scanf("%d",&n);
	s=0;
	int*sz=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		while(sz[i]==k)
		{
			for(a=i;a<n;a++)
			{
				sz[a]=sz[a+1];
			}
			s++;
		}
	}
	for(i=0;i<n-s;i++)
	{
		if(i==0)
		printf("%d",sz[i]);
		else if(i!=0)
			printf(" %d",sz[i]);
	}
	free(sz);
return 0;
}

