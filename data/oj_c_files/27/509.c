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




int main ()
{ 
  int n,i;
  scanf("%d",&n);
  double a[n],b[n],c[n],d[n],e[n],p,q;
  for (i=0;i<n;i++)
  { scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);}
  for (i=0;i<n;i++)
  {   q=b[i]*b[i]-4*a[i]*c[i];
      p=-b[i]/(2*a[i]);
    if (fabs(q)<=1e-6)
    {   d[i]= p;
        printf("x1=x2=%.5f\n",d[i]);}
    if ( q >1e-6)
    {   d[i]=p+(sqrt(q))/(2*a[i]);
        e[i]=p-(sqrt(q))/(2*a[i]);
        printf("x1=%.5f;x2=%.5f\n",d[i],e[i]);}
    if (q<-1e-6)
    {   d[i]=p;
        if (fabs(p)<1e-6) d[i]=0;
        e[i]=sqrt(-q)/(2*a[i]);
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",d[i],e[i],d[i],e[i]);  }
   }     
  
  
  
  
  }



