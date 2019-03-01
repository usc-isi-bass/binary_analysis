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

void main()
{
 int n,i;
 float a,b,c,r,s,x1;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
   scanf("%f %f %f",&a,&b,&c);
   r=(b*b-4*a*c);
   s=-(b)/(2*a);
   if(fabs(s)<0.00001) s=0;
   x1=(-b+sqrt(r))/(2*a);
   if(fabs(x1)<0.00001) x1=0;
   if(r>0.00001) printf("x1=%.5f;x2=%.5f",x1,(-b-sqrt(r))/(2*a));
    else if(fabs(r)<0.00001) printf("x1=x2=%.5f",s);
          else if(a>0) printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",s,(sqrt(-r))/(2*a),s,(sqrt(-r))/(2*a));
          else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",s,-(sqrt(-r))/(2*a),s,-(sqrt(-r))/(2*a));
   printf("\n");}
}