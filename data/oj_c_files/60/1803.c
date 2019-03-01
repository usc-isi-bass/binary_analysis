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

main()
{
int a,b,c,d,e,f;
scanf("%d",&a);
if(a<5)
 printf("empty");
for(b=3;b<=a-2;b=b+2)
  {
   for(c=2;c<=b;c++)
   {
    d=b%c;
     if (d==0) break;                
   }                     
    for(e=2;e<=b+2;e++)
    {
    f=(b+2)%e;
     if (f==0) break;    
    }  
   if(c==b)
   {if(e==(b+2))
   printf("%d %d\n",b,b+2);
  }}  
  }
