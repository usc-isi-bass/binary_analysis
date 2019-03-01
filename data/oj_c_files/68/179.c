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
	int n,i,j,k,t,p,x,a;
	scanf("%d",&n);
	t=n/2;
	for (i=6;i<=n;i+=2)
	{
		for (j=3;j<=t;j++)
		{
			if (j%2==0)
				goto loap;
			else if (j>2)
			{
				p=sqrt(j);
					for (k=3;k<=p;k+=2)
					{
						if (j%k==0)
							goto loap;
					}
			}
			a=i-j;
			x=sqrt(a);
			if (a%2==0)
				goto loap;
			else
			{
				for (k=3;k<=x;k+=2)
					if (a%k==0)
						goto loap;
			}
			printf("%d=%d+%d\n",i,j,a);
			break;
		loap:;
		}
	}
return 0;
}