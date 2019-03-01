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
	int n,a,b,c,d;
    scanf("%d",&n);
    a=n%10;
    printf("%d",a);
    b=(n-a)/10;
    if(b!=0)
	{b=b%10;
       printf("%d",b);
       c=(n-10*b-a)/100;
       if(c!=0)
	   {
          c=c%10;
          printf("%d",c);
          d=(n-100*c-10*b-a)/1000;
          if(d!=0)
             printf("%d\n",d);
	   }
	}
}
