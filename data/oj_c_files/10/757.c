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

int com(void const *a,void const *b)
{
    return (*(int *)a-*(int *)b);
}
main()
{
      int k,H;
      int j,count[25],n;
      scanf("%d",&k);
      int h[25],i;
      for (i=0;i<k;i++)
      {
          scanf("%d",&h[i]);
      }
      count[k-1]=1;
      for (i=k-2;i>=0;i--)
      {
          n=0;
          for (j=k-1;j>=i+1;j--)
          {
             if  (h[j]<=h[i])
             {
                  if (count[j]>=n)
                  {
                       n=count[j];
                  }
             }
          }
          count[i]=n+1;
      }

           qsort(count,k,sizeof(int),com);
           printf("%d",count[k-1]);
      getchar();getchar();getchar();getchar();getchar();getchar();
}
