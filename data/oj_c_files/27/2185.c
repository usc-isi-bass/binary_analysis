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
      int n,i;
      i=0;
      double x1,x2;
      scanf("%d",&n);
      float a[n],b[n],c[n];
      double delta,d,e;
      while (i<n)
      {
            scanf("%f %f %f",&a[i],&b[i],&c[i]);
              i++;
      }
      i=0;
      while (i<n)
      {
         delta=(b[i])*(b[i])-4*a[i]*c[i];
         if (delta>0)
         {
                    x1=(-b[i]+sqrt(delta))/(2*a[i]);
                    x2=(-b[i]-sqrt(delta))/(2*a[i]);
                    printf("x1=%.5f;x2=%.5f\n",x1,x2);
         }
         if (delta==0)
         {
                     x1=-b[i]/(2*a[i]);
                     printf("x1=x2=%.5f\n",x1);
         }
         if (delta<0)
         {
                     d=-b[i]/(2*a[i]);
                     e=sqrt(-delta)/(2*a[i]);
                     if (b[i]==0)
                     {
                     printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-d,e,-d,e);
                     }
                     else
                     {
                     printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",d,e,d,e);  
                     }
         }
         i++;
      }
      getchar();getchar();getchar();getchar();
}
