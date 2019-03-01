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
	int n,i,j,k,l,b;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		printf("%d=",i);
		for(j=3;j<=(i/2);j+=2)
		{
			b=1;
			for(l=2;l<=sqrt(j);l++) 
			{
				if(j%l==0) 
				{
					b=0;
				}
			}
			if(b)
			{
				for(k=2;k<=sqrt(i-j);k++)
				{
					if((i-j)%k==0)
					{
						b=0;
					}
				}
			}
			if(b) break;
		}
		if(b)
		{
			printf("%d+%d\n",j,i-j);
		}
	}
}

