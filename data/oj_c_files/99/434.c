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
	int a[100],n,i,b,c,d,e;
    double o,p,q,r;
	scanf("%d",&n);
	b=0;
	c=0;
	d=0;
	e=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
 	for(i=0;i<n;i++)
	{
		if(a[i]<19)
		{
			b+=1;
			 
		}
		else
		{
			if(a[i]<36)
			{
				c+=1;
				 
			}
			else
			{
                if(a[i]<61)
				{
					d+=1;
					 
				}
		        else 		
				{ 
					e+=1;
				 
				}
			}
		}
			
		
	}
	o=(double)100*b/n;
	p=(double)100*c/n;
	q=(double)100*d/n;
	r=(double)100*e/n;
	printf("1-18: %.2lf%%\n",o);
    printf("19-35: %.2lf%%\n",p);
    printf("36-60: %.2lf%%\n",q);
    printf("60??: %.2lf%%",r);
	return 0;
}
