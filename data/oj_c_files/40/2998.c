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
      double a,b,c,d,s,x,y;
      scanf("%lf",&a);
      scanf("%lf",&b);
      scanf("%lf",&c);
      scanf("%lf",&d);
      scanf("%lf",&x);
      x=x/2/180*pi;
      s=(a+b+c+d)/2;
      y=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(x)*cos(x);
      if(y<0)
      printf("Invalid input") ;
      else
      printf("%.4lf",sqrt(y));
      getchar();
      getchar();
      getchar();
      
      
}