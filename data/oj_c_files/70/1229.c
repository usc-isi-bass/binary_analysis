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


double d(double x1,double y1,double x2,double y2)
{
    double k;
    k=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return k;
}

main()
{
      int n;
      int i,j,k;
      double x,y;
      double a[100];
      double b[100];
      double c[100];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%lf %lf",&a[i],&b[i]);
      }
      int h=0;
      for(i=0;i<n;i++)
      {
                    for(j=n-1;j!=i;j--)
                    {
                              c[h]=d(a[i],b[i],a[j],b[j]);
                             
                              h++;         
                    }  
      }
      double max=0;
      for(i=0;i<h;i++)
      {
                      if(c[i]>max)
                      max=c[i];
      }
      printf("%.4f\n",max);
           
      
}
