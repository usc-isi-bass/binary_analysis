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
	int x,a,b,c,d,e,r;
	scanf("%d",&x);
	a=x%10;
	b=(x/10)%10;
	c=(x/100)%10;
	d=(x/1000)%10;
	e=(x/10000)%10;
	if(e==0)
	{	
		if(d==0)
		{	
			if(c==0)
			{	
				if(b==0)
				{	
					r=a;
					printf("%d\n",r);
	            }
				else
					{
						r=a*10+b;
	                    printf("%02d\n",r);
				    }
	        }
			else
				{
					r=a*100+b*10+c;
	                printf("%03d\n",r);
			    }
	     }
	     else
			 {
				 r=a*1000+b*100+c*10+d;
	             printf("%04d\n",r);
		     }
	}
	else
		{
			r=a*10000+b*1000+c*100+d*10+e;
		    printf("%05d\n",r);
	    }
	return 0;
}