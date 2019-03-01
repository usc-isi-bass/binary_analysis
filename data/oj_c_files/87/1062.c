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
      int a,b,c,d,e,f,sum,second;
      int h,m,s;
      sum=1;
      
      while  (sum!=0)
      {
             scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
             sum=a+b+c+d+e+f;
             
             if  (f<c)
             {
                 e=e-1;
                 s=f+60-c;
             }
             else
             s=f-c;
             
             if  (e<b)
             {
                 d=d-1;
                 m=e+60-b;
             }
             else
             m=e-b;
             
             h=d+12-a;
             
             second=h*3600+m*60+s;
             
             if  (sum!=0)
             printf("%d\n",second);
      }

}
