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
      int a[31][31];
      int t,i,j,m,n;
      for (i=0;i<=30;i++)a[i][0]=0;
      for (i=1;i<=30;i++)a[0][i]=1;
      for (i=1;i<=30;i++)
      {
          for (j=1;j<=30;j++)
          {
              if (i>=j)
              {
                  a[i][j]=a[i][j-1]+a[i-j][j];
              }
              else
              {
                  a[i][j]=a[i][i];
              }
          }
      }
      scanf("%d",&t);
      for (i=1;i<=t;i++)
      {
          scanf("%d %d",&m,&n);
          printf("%d\n",a[m][n]);
      }
      getchar();
      getchar();
}