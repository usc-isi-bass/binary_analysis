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
      int i,j;
      float a,b,c,d,s,angle,S,delta;
      scanf("%f\n%f\n%f\n%f\n%f\n",&a,&b,&c,&d,&angle);
      angle/=2;
      angle/=360;
      angle*=(2*3.1415926);
      s=(a+b+c+d)/2;
      delta=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle)*cos(angle);
      if(delta<0)
           printf("Invalid input");
      else
      {
           S=sqrt(delta);
           printf("%.4f",S);
      }
      }
