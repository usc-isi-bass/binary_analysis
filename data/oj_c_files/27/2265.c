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
  double a,b,c,s,x1,x2;
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  scanf("%lf %lf %lf",&a,&b,&c);
  s=b*b-4*a*c;
  if(s>0) printf("x1=%.5f;x2=%.5f\n",(-b+sqrt(s))/(2*a)+0,(-b-sqrt(s))/(2*a)+0);
  else if(s==0) printf("x1=x2=%.5f\n",-b/(2*a)+0);
  else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a)+0,sqrt(-s)/(2*a)+0,-b/(2*a)+0,sqrt(-s)/(2*a)+0);
  }
  
} 
