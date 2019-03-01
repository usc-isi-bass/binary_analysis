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
      int m;
      scanf("%d",&m);
      int i,j,judge,k,judge2;
      for (i=2;i<=m/2;i++)
      {
          judge=1;
          for (j=2;j<i/2;j++)
          {
              if (i%j==0)
                 judge=0;
          }
          if (judge==1)
          {
              k=m-i;
              judge2=1;
              for (j=2;j<k/2+1;j++)
              {
              if (k%j==0)
                 judge2=0;
              }
              if (judge2==1)
              printf("%d %d\n",i,k);
          }
      }
      getchar();
      getchar();
}