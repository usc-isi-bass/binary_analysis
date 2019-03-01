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
	int m,M,n,k,X=1,i;
	scanf("%d %d",&n,&k);
	for(m=n+k+(n-1)*(n+2*k);X!=0;m++)//
	{
		M=m;
		for(i=1;i<=n;i++)
		{
			if(M%n==k)
			{
				M=M-M/n-k;
			}
			else break;
		}
		if(i==n+1)
		{
			printf("%d",m);
			X=0;
		}
	}
}