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
    int n;
	scanf("%d",&n);
	int sz[20000];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		if(i>0)
		{
		    for(int j=0;j<i;j++)
			{
			    if(sz[j]==sz[i])
				{
					sz[i]=0;
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]>0)
		{
			if(i==0)
			{
			    printf("%d",sz[i]);
			}
			else
			{
				printf(" %d",sz[i]);
			}
		}
	}
	return 0;
}
