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
    int i,a[1000],b[1000],j,s,p,m,n;
    for(i=0;;i++)
    {
      scanf("%d %d",&a[i],&b[i]);
      if(a[i]==0&&b[i]==0)break;
      }
      for(j=0;j<i;j++)
    {
     if(a[j]==1)
     printf("1\n");
     else
        {
         s=0;
         n=a[j];
          m=b[j];
          for (p=2; p<=n; p++)
          {
           s=(s+m)%p;
           }
           printf ("%d\n", s+1);
         }
    }
      
    getchar();
    getchar();
    getchar();
    } 