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
      int n ;
      scanf("%d",&n);
      double d,max=0;
      double*x=(double*)malloc(n*sizeof(double));
      double*y=(double*)malloc(n*sizeof(double));
      for(int i=0;i<n;i++)
      { 
              scanf("%lf %lf",&x[i],&y[i]); 
      }
      for(int j=0;j<n;j++)
      {
              for(int k=j+1;k<n;k++)
              {
                    d=sqrt((x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k])); 
                    if(d>max)
                    max=d; 
              }
      }
      printf("%.4lf",max);
      getchar();
      getchar();
}
