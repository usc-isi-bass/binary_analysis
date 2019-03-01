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

int sz[1010];
int main()
{
	int n,i,a,b,c,h=0,k=0,j=0;
	scanf("%d %d\n",&n,&k);
    scanf("%d",&sz[0]);
    for(i=1;i<n;i++)
	{
		scanf(" %d",&sz[i]);
	}
    for(i=0;i<n;i++)
	{
		
		for(j=n-1;j>i;j--)
		{
			if(sz[i]+sz[j]==k)
			{
				printf("yes");
				h=1;
				break;
			}
		}
		if(h==1)
		{
			break;
		}
	}
	if(h==0)
	{
		printf("no");
	}
	return 0;
}
