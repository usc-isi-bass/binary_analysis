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
{   int a,b,d=3,e,h,y,i,x,z;
    float c,f,g;
    scanf("%d\n",&a);
    b=a/2;
    while(d<=b)
   {  e=a-d;
      f=sqrt(d);
      g=sqrt(e);
      h=2;
      i=2;
      y=1;
      z=1;
         while(h<=f)
       {  if(d%h==0)
          { y=0;break;}
          else h++;
        }
             while(i<=g)
           {  if(e%i==0)
              {z=0;break;}
             else i++;
            }
        if(y==1&&z==1)
        printf("%d %d\n",d,e);
        d=d+2;
}
}