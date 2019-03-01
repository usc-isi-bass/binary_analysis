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
	int n,k,i,a[1000],c=0,s;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=c;i<n;i++)
	{
		s=a[c]+a[i];
		if(s==k)
		{
			printf("yes");
			break;
		}
		if(i==n-1)
		{
			c=c+1;
			i=c;
		}
		if(c==n-1)
		{
			printf("no");
			break;
		}
	}
	return 0;
}