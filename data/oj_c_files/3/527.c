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

void main()
{
	int n,k;
	int s=0;
	int i,j;
	int a[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	     scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<n)
		{
			if(i==j)
			{
				j++;
				continue;
			}
			else
			{
				s=a[i]+a[j];
				j++;
				if(k==s)
				{
					printf("yes");
					goto label;
				}
			};
		};
		if((i==n-1)&&(s!=k))
			printf("no");
	}
    label:
	return(0);
}