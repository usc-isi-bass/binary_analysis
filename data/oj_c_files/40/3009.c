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
{double a,b,c,d,x,y,z,s,sn,S;
 char h[15]={"Invalid input\0"};
 scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&x);
 s=(a+b+c+d)/2;
 y=x/2/180*PI;
 z=cos(y)*cos(y);
 sn=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*z;
 if(sn<0)
  {printf("%s",h);}
 else
  {S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*z);
  printf("%6.4lf",S);
  }
}
