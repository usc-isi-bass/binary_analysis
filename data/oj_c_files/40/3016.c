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
      double a,b,c,d;
      double e;
      double i;
      scanf("%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d);
      scanf("%lf",&e);
      i=(double)(e/2);
      double f,g;
      f=(double)((a+b+c+d)/2);
      double p;
      p=(double)((i/180)*PI);
      g=(double)((f-a)*(f-b)*(f-c)*(f-d)-a*b*c*d*cos(p)*cos(p));
      if(g<0)
      printf("Invalid input");
      else
      {
          double s;
          s=sqrt(g);
          printf("%.4lf",s);
      }
      getchar();
      getchar();
}