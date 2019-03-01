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
  int k,n;
  double *p;
  double s,a,x;
  int i,j;
  scanf("%d",&k);
  for(i=0;i<k;i++)
    {
      s=0;
      a=0;
      x=0;
      scanf("%d",&n);
      p=(double*)malloc(sizeof(double)*n);
      for(j=0;j<n;j++)
       {
         scanf("%lf",&p[j]);
         x=x+p[j]/n;
       } 
      for(j=0;j<n;j++)
       {
         a=a+(p[j]-x)*(p[j]-x);
       }
      s=sqrt(a/n);
      printf("%.5lf\n",s);
    }
  
}       
