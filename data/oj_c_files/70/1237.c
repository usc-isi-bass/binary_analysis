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
      scanf ("%d",&n);
      int i,j;
      double x[1000]={0.0}; double y[1000]={0.0};
      for (i=0;i<n;i++)
      {
          scanf ("%lf %lf",&x[i],&y[i]);
      }
      double dis; double ans;
      for (i=0;i<n;i++)
      {
          for (j=i+1;j<n;j++)
          {
              dis=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
              ans=((ans>dis)?ans:dis);
          }
      }
      printf ("%.4f\n",ans);
}