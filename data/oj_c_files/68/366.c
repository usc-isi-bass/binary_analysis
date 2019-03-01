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

main()
{
	long a,b,i,j,n,x,k,t;
	scanf("%ld",&n);
	i=6;
	while(i<=n)
	{
		k=2;
		b=1;
		x=1;
		while(k<=(i/2))
		{
			j=2;
			b=1;
			a=sqrt(k);
			while(j<=a)
			{
				x=(k%j!=0);
				b=b&&x;
				j++;
			}
			if(b==1)
			{
				j=2;
				b=1;
				a=sqrt(i-k);
				while(j<=a)
				{
					x=((i-k)%j!=0);
					b=b&&x;
					j++;
				}
				if(b==1)
					printf("%d=%d+%d\n",i,k,i-k);
			}
			k++;
			if(b==1)
				break;
		}
		i=i+2;
	}
}
