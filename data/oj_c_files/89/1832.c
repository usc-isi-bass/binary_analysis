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
      int n,i,c=0,k,j,d,e;
      scanf("%d",&n);
      int a[100000],b[100000];
      for (i=0;i<1000000;i++)
      {
          scanf("%d %d",&a[i],&b[i]);
          if (a[i]==0&&b[i]==0)
          break;
      }
      k=i-1;
      for (i=0;i<=n-1;i++)
      {
          d=0;
          e=0;
          for (j=0;j<=k;j++)
          {
              if (b[j]==i)
              d++;
          }
          for (j=0;j<=k;j++)
          {
              if (a[j]==i)
              e++;
          }
          if ((d==n-1)&&(e==0))
          {
                  printf("%d\n",i);
                  c++;
          }
      }
      if (c==0)
      printf("NOT FOUND\n");
}