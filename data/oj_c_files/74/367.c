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
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j,k;
	int a,b,c;
	c=0;
	for(i=m;i<=n;i++)
	{
		k=sqrt(i);
		for(j=2;j<=k;j++)
		{
			if(i%j!=0)
				continue;
			else
				break;
		}
		if(j>k)
		{
			a=i;
			b=0;

			while(a>0)
			{
				b=b*10+a%10;
				a=a/10;
			}
			if(i==b)
			{
				if(c>=1)
					printf(",");
				printf("%d",i);
				c++;
			}
		}
	}
	if(c==0)
		printf("no");
}
