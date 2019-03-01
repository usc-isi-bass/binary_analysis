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
	int n,k,s[1000],i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(s[i]+s[j]==k)
			{
				printf("yes");
				return 0;
			}
		}
		for(j=i+1;j<n;j++)
		{
			if(s[i]+s[j]==k)
			{
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}
