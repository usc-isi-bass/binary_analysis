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
      double a[1000]={1,1};
      int i,j,k,m,n;
      float sn=0,tn;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
                       sn=0;
                       scanf("%d",&m);
                       for(j=2;j<=m+2;j++)
                       a[j]=a[j-1]+a[j-2];
                       for(k=1;k<=m;k++)
                       sn=sn+(double)(a[k+1]/a[k]);
                       printf("%.3lf\n",sn);
                       }
        
      }