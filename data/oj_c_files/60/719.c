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
	int n,a[10000],i=0,k,j,b=0,q=0;
	scanf("%d",&n);
	if(n<=4)
		printf("empty");
	
	else
	{
		for(k=3;k<=n;k=k+2)
		{
			for(j=3;j<=sqrt(k);j=j+2)
			{
				if(k%j==0)
				{
					q=q+1;
					break;
				}
			}
			if(q==0)
			{
				a[i]=k;
				i=i+1;
			}
			else
			{
				q=0;
			}
		}
	
	for(j=0;j<i-1;j++)
	{
		if(a[j]+2==a[j+1])
		{
			printf("%d %d\n",a[j],a[j+1]);
			b=b+1;
		}
	}
	if(b==0)
		printf("empty\n");
	}
}





	

