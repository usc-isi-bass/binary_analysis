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
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n%10;
	b=((n-a)/10)%10;
	c=((n-a-b*10)/100)%10;
	d=((n-a-10*b-100*c)/1000)%10;
	e=((n-a-10*b-100*c-1000*d)/10000)%10;
	   if(b==0)
	   {
    	printf("%d",a);
	   }
       if(c==0&&b!=0)
	   {
        printf("%d%d",a,b);
	   }
    	if( d==0&&c!=0 )
		{
		printf("%d%d%d",a,b,c);
		}
		if(e==0&&d!=0)
		{
	     printf("%d%d%d%d",a,b,c,d);
		}
		if(e!=0)
			printf("%d%d%d%d%d",a,b,c,d,e);
	return 0;
}