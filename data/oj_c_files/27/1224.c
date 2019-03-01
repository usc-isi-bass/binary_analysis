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



int main (int argc, char *argv[])
{
   int n,j;
   float a[100],b[100],c[100];
   double x1,x2;
   scanf("%d",&n);
   for(j=0;j<n;j++)
   { 
     scanf("%f%f%f\n",&a[j],&b[j],&c[j]);
     if(0<=(b[j]*b[j]-4*a[j]*c[j]))
     {
       x1=(double)(-b[j]+sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
       x2=(double)(-b[j]-sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
       if(x1==x2)
       {
           printf("x1=x2=%.5lf\n",x1);
       }
       else
       {
           printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
           
       }
     }
     else
     {
        double m,l;
        m=(double)-b[j]/(2*a[j]);
        l=(double)sqrt(4*a[j]*c[j]-b[j]*b[j])/(2*a[j]);
        printf("x1=%.5lf+%.5fi;x2=%.5lf-%.5fi\n",m,l,m,l);
     }
   }
  return 0;
}