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
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      double a,b,c,m;
                      scanf("%lf %lf %lf",&a,&b,&c);
                      m=b*b-4*a*c;
      if(fabs(m)<=1e-6)
           {
                       if(fabs(b)<=1e-6)
                                printf("x1=x2=%.5f",b/(2*a));
                       else
                                printf("x1=x2=%.5f",-b/(2*a));
           }
      else 
           if(m>1e-6)
              printf("x1=%.5lf;x2=%.5lf",(-b+sqrt(m))/(2*a),(-b-sqrt(m))/(2*a));
           else
                 {
                           if(fabs(b)<=1e-6)
                                printf("x1=%.5lf+%.5lfi;x2=%.5f-%.5fi",b/(2*a),sqrt(-m)/(2*a),b/(2*a),sqrt(-m)/(2*a));
                           else
                                printf("x1=%.5lf+%.5lfi;x2=%.5f-%.5fi",-b/(2*a),sqrt(-m)/(2*a),-b/(2*a),sqrt(-m)/(2*a));
                 }
      printf("\n");
      }
}
