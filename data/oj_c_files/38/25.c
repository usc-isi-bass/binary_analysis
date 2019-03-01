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
      int n,i,j,m;
      double a[1000],x;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
            double sum=0;
            scanf("%d",&m);
            for(j=0;j<m;j++)
            {
               scanf("%lf",&a[j]);
               sum=sum+a[j];
            }
            x=sum/m;
            sum=0;
            for(j=0;j<m;j++)
            {
                 sum=(a[j]-x)*(a[j]-x)+sum;
            }
            sum=sqrt(sum/m);
            printf("%.5f\n",sum);
      }
      getchar();
      getchar();
}  
