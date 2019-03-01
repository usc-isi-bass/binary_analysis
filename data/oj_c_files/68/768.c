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
	int x,k,n,i,j,a;
	scanf("%d",&a);
	for(x=6;x<=a;x+=2)
	{
		k=3;
	    do
		{
			i=3;
		    for(n=k;i<=sqrt(n);)
			{
			    for(i=3;i<=sqrt(n);i+=2)
				{
				    if(n%i==0)
					    break;
				}
				if(i<=sqrt(n))
					n=n+2;
			}
		    for(j=3;j<=sqrt(x-n);j+=2)
			{
			    if((x-n)%j==0)
				    break;
			}
		    k=n+2;
		}while(j<=sqrt(x-n));
		printf("%d=%d+%d\n",x,n,x-n);
	}
}