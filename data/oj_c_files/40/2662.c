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

int main()
{
     
       double y=0,a,b,c,d,s=0,x=0,e,v=0;
       scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
       s = (a+b+c+d)/2; 
       v=e/360*3.1415926;
       x = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(v)*cos(v); 
      if(x<0)
      {
       printf("Invalid input");
       }
      else{
      printf("%.4lf",sqrt(x));
       }
 
   return 0;
  }