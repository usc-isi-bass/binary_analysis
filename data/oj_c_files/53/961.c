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
	int n,m,i,a,b=1,j;
	int sz[300];
	scanf("%d",&n);
	scanf("%d",&(sz[0]));
	for(i=1;i<n;i++)
	{
		j=0;
		scanf("%d",&a);
		for(m=0;m<b;m++)
		{
			if(sz[m]==a)
			{
				j+=1;
			}
		}
		if(j==0)
		{
			sz[b]=a;
			b+=1;
		}
	}
	int c=0;
	for(i=0;i<b;i++)
	{
		if(c>0)
		{
			printf(",%d",sz[i]);
		}
		else
		{
			printf("%d",sz[i]);
		}
		c++;
	}
	return 0;
}