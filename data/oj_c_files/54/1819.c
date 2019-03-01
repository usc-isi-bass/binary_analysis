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
	int i,j,n,k,m,a,b;
	scanf("%d %d",&n,&k);
	for(a=1;a<10000000000;a++)
	{
		i=a;
		for(j=0,b=0;j<n;j++)
		{
			if((i-k)%n!=0||i<=0)break;
			if((i-k)%n==0)
			{
				i=(i-k)*(n-1)/n;
			}
			if(j==n-1&&i>0)
			{
				b=1;
				break;
			}
		}
		if(b==1)break;
	}
	printf("%d",a);
	return 0;
}