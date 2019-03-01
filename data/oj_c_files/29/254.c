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
	int n,i,j,sz[100];
	float c,d,sum[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		int a=1,b=1,s=0;
		float k=0;
		sum[i]=0;
		for(j=0;j<sz[i];j++)
		{
			s=a;
			a=b;
			b=s+b;
			k=(float)b/a;
			sum[i]+=k;
		}
	
		printf("%.3f\n",sum[i]);
	}
	return 0;
}