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
	int x,a,b,c,d,e;
	scanf("%d",&x);
	if(x>9999)
	{e=x/10000;
	d=x%10000/1000;
	c=x%10000%1000/100;
         b=x%10000%1000%100/10;
	a=x%10000%1000%100%10;
	printf("%d%d%d%d%d\n",a,b,c,d,e);}
	else
		if(x>999)
		{d=x/1000;
    	c=x%1000/100;
         b=x%1000%100/10;
    	a=x%1000%100%10;
    	printf("%d%d%d%d\n",a,b,c,d);}
        else
		  if(x>99)
		  {
    	  c=x/100;
          b=x%100/10;
          a=x%100%10;
    	  printf("%d%d%d\n",a,b,c);}
          else
		    if(x>9)
			{
            b=x/10;
            a=x%10;
    	    printf("%d%d\n",a,b);}
			else printf("%d\n",x);
}