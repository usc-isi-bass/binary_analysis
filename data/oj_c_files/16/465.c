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
   int a,b,c,d,e,f,g,h,i;
   scanf("%d",&a);
   b=floor(a/10000);
   a=a-b*10000;
   c=floor(a/1000);
   a=a-c*1000;
   d=floor(a/100);
   a=a-d*100;
   e=floor(a/10);
   a=a-e*10;
   if(b==0)
     {if(c==0)
       {if(d==0)
         {if(e==0)
           printf("%d",a);
         else printf("%d%d",a,e);}
       else printf("%d%d%d",a,e,d);}
     else printf("%d%d%d%d",a,e,d,c);}
   else printf("%d%d%d%d%d",a,e,d,c,b);


}
   