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

int main()
{
    int n,k,i,j,sum,leap=0;
    int a[10001];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       /*if(i==n)
        {  printf("no");
            break;
        }*/
      for(j=0;j<n;j++)
      {
          if(i==j)
            continue;
          else
          {
              sum=a[i]+a[j];
              if(sum==k)
               {
                   printf("yes");
                   leap=1;
                   break;
               }
          }
      }
      if(leap==1)
      break;

    }
    if(leap==0)
    printf("no");
    return 0;
}


