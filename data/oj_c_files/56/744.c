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
{int a,b,c,d,e,f,g,h,i;

scanf("%d",&a);
if(a>9999)
{ b=a/10000;
   c=a%10000;
   d=c/1000;
   e=c%1000;
   f=e/100;
   g=e%100;
   h=g/10;
   i=g%10;
   printf("%d%d%d%d%d",i,h,f,d,b);}
else if(a>999)
{d=a/1000;
   e=a%1000;
   f=e/100;
   g=e%100;
   h=g/10;
   i=g%10;
   printf("%d%d%d%d",i,h,f,d);}
else if(a>99)
{ f=a/100;
   g=a%100;
   h=g/10;
   i=g%10;
   printf("%d%d%d",i,h,f);}
else if(a>9)
{h=a/10;
   i=a%10;
   printf("%d%d",i,h);}
else printf("%d",a);



	  
}
	