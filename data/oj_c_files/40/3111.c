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
{     float a,b,c,d,oo,S;
      scanf("%f",&a);
      scanf("%f",&b);
      scanf("%f",&c);
      scanf("%f",&d);
      scanf("%f",&oo);
      float s=(a+b+c+d)/2;
      float o=(oo*3.1415926)/(2*180);
      if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*(cos(o))*(cos(o))<0)
      printf("Invalid input");
      else
      {S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*(cos(o))*(cos(o)));
       printf("%.4f",S);
      }      
    
}