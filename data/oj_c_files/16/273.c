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
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n%10;
	b=(n%100-n%10)/10;
	c=(n%1000-n%100)/100;
	d=(n%10000-n%1000)/1000;
	e=(n-1000*d-100*c-10*b-a)/10000;
	if(e!=0)
	{	
	    printf("%d%d%d%d%d",a,b,c,d,e);
	}
	else
		if(d!=0)
        {
			printf("%d%d%d%d",a,b,c,d);
		}
		else 
			if(c!=0)
            {
				printf("%d%d%d",a,b,c);
            }
			else
				if(d!=0)
				{
					printf("%d%d",a,b);
				}
				else
				{
					printf("%d",a);
				}
	                
}