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
      int n,i,j;
      float x[20],y[20];
      double t;
      double dis=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%f %f",&x[i],&y[i]);            
      }
      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          {
              t=(double)sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
              if(t>=dis)
              dis=t;              
          }              
      }
      printf("%.4f\n",dis);
      getchar();getchar();getchar();getchar();
}
