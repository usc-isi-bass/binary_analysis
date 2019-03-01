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
	int n,k,i,j,a[1000],b,q=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		q=0;
		for(j=0;j<n-i-1;j++)
		{
		b=a[i]+a[j+1];
		if(b==k)
		{
			printf("yes\n");
			q++;
		    return 0;
		}
		else
		{
			q=-1;
		}
		}
	}
	if(q==-1)
		printf("no\n");
	return 0;
}


