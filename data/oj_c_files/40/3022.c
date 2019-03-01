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
      double a,b,c,d,m,n,s;
      scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&m);
      s=(a+b+c+d)/2;
      n=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((PI*m)/180/2)*cos((PI*m)/180/2);
      if (n<0)
      printf ("Invalid input");
      else 
      printf("%.4lf",sqrt(n));
}