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
      int a,b,c,d=2,e=3,f=1;
      scanf("%d",&a);
      while(a>1)
      {
         if(a%2==0)
         {
                   b=a/2;
                   printf("%d/%d=%d\n",a,d,b);
                   a=b;
                   }
         else
         {
             c=3*a+1;
             printf("%d*%d+%d=%d\n",a,e,f,c);
             a=c;
             }
             }
             printf("End\n");
           }