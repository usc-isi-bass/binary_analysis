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
      int n;
      double d=0,s;
      scanf("%d",&n);
      int m;
      m=n*(n-1)/2;
      double *a=(double *)malloc(n*sizeof(double));
      double *b=(double *)malloc(n*sizeof(double));
      double *p=(double *)malloc(m*sizeof(double));
      int i,j;
      for(i=0;i<n;i++)
      {
                      scanf("%lf %lf",&a[i],&b[i]);
      }
      for(i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
      {
                        s=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
                      if(s>d)
                      d=s;
      }
      printf("%.4f",d);
                      
     
}