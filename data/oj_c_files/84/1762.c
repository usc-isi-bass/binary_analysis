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
	int a,b,c,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c);
		if(i==0)
		{
			a=c;
			b=c;
		}
		else if(i==1)
		{
			if(c>=a)
			{
				a=c;
				b=b;
			}
			else
			{
				a=a;
				b=c;
			}

		}
		else
		{
			if(c>=a)
			{
				b=a;
				a=c;
			}
	    	else if(c<=b)
			{
				a=a;
				b=b;
			}
			else
			{
				a=a;
				b=c;
			}
		}
	}
        printf("%d\n",a);
        printf("%d\n",b);
		return 0;
}