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
      int i,j,n;
      double x[500],y[500],max=0,dis,disx,disy;
      scanf("%d",&n);
      for(i=0;i<n;i++)
          scanf("%lf %lf",&x[i],&y[i]);
      for(i=0;i<n;i++)
      {
          for(j=0;j<i;j++)
          {
              disx=x[i]-x[j];
              disy=y[i]-y[j];
              dis=sqrt(disx*disx+disy*disy);
              if(dis>max)
                  max=dis;
          }
      }
      printf("%.4lf",max);
      getchar();
      getchar();
}
