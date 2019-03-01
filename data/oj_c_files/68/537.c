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
	int a,n,b,i,c;
	scanf("%d",&n);
	for(a=6;a<=n;a=a+2)
	{
      for(b=3;b<=a/2;b=b+2)          
		{
				for(i=2;i<=sqrt(b);i++)
				if(b%i==0)break;
                if(i<(sqrt(b)+1)&&i>sqrt(b))
				{
					c=a-b;
			    for(i=2;i<=sqrt(c);i++)
				if(c%i==0)break;
				if(i<(sqrt(c)+1)&&i>sqrt(c))
				{
					printf("%d=%d+%d\n",a,b,c);
				    break;
				}
				}
				  	 }

	}
}