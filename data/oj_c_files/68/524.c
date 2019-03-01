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
	int n,l,m,i,j;
	scanf("%d",&n);
	for(l=6;l<=n;l=l+2)
	{
		for(m=3;m<=l/2;m=m+2)
		{
			for(i=3;i<=sqrt(m);i++)
				if(m%i==0)break;
				if(i<=sqrt(m))continue;
			    for(j=3;j<=sqrt(l-m);j++)
				if((l-m)%j==0)break;
				if(j>sqrt(l-m))
				{
					printf("%d=%d+%d\n",l,m,l-m);
				break;
				}
	
		}
	}
	return 0;
}
