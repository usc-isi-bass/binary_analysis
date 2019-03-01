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
      double a,b,c,d,e,s,ans,x;
      scanf("%lf",&a); 
      scanf("%lf",&b);
      scanf("%lf",&c); 
      scanf("%lf",&d);
      scanf("%lf",&e); 
      
      s=(a+b+c+d)/2;
      x=cos(e/2/180*3.1415926);
      ans=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*x*x;
      if (ans<0) printf("Invalid input");
      else printf("%.4lf\n",sqrt(ans));
  
}
