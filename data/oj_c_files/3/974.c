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
	int n,k,i,j,a;
    scanf("%d %d",&n,&k);
	int sz[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	int m=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				break;
			else
			{
			a=sz[i]+sz[j];
			if(a==k)	
				m++;
			}
		}
	}
	if(m==0)
		printf("no");
	else
		printf("yes");
	return 0;
}


	