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
	int n,k,i,j,t,m;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(j=2;j<=i;j++)
		{
			k=sqrt(j);
			for(t=2;t<=k;t++)
			{
				if(j%t==0) break;
			}
			if(t==k+1) 
			{
				m=i-j;
				k=sqrt(m);
				for(t=2;t<=k;t++)
				{
					if(m%t==0) break;
				}
			if(t==k+1)
			{
				printf("%d=%d+%d\n",i,j,m);
				break;
			}
			}

		}
	}
}
