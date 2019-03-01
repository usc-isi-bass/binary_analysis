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
	int n,a,b,c,d;
	scanf("%d",&n);
    a=n%10;
	b=n/10%10;
	c=n/100%10;
	d=n/1000%10;
	if(n>=10)
	{
		if(n/10>=10)
		{
			if(n/100>=10)
			{
				if(n/1000<10)
			    printf("%d%d%d%d\n",a,b,c,d);
			}
		    else
	        printf("%d%d%d\n",a,b,c);
		}
	    else
	    printf("%d%d\n",a,b);
	}
	else
	printf("%d\n",n);
}