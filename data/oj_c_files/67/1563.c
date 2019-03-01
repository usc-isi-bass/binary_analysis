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
      int n ;
      double x,y;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
         int a,b;
         scanf("%d %d",&a,&b);
         if(i==0)
         { 
            x=(double)b/a;
            continue;
         }
         else 
         {
              y=(double)b/a;
         }
         if(y-x>0.05)
         printf("better\n");
         else if(x-y>0.05)
         printf("worse\n");
         else
          printf("same\n");
      }
    getchar();
    getchar(); 
    getchar();
    getchar(); 
}
