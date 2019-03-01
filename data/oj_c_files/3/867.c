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
	int n,k,sum;
	scanf("%d %d",&n,&k);
	int shu[NUM];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&(shu[i]));
	}
	for(int j=0;j<n;j++)
	{
		for(int l=n-1;l>j;l--)
		{
			sum=shu[j]+shu[l];
			if(sum==k)
			{
				printf("yes");
				break;
			}
		}
		if(sum==k)  break;
	}
	if(sum!=k)  printf("no");
	return 0;
}