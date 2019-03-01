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
	int sz[1001];
	int n, i, j, k, m;
	m=0;
	scanf("%d", &n);
	scanf("%d", &k);
	for(i=0;i<n;i++)
	{
		scanf("%d", &(sz[i]));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
			{
				m=1;
				printf("yes");
				break;
			}
			
		}
		if(m==1)
			break;
	}
	if(m==0)
		printf("no");
	return 0;
}


