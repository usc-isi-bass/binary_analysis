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
      int m,n,i,j,a[20][20];
      scanf("%d %d",&m,&n);
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              if(j==0)
               scanf("%d",&a[i][j]);
               else
               scanf("%d",&a[i][j]);
          }
      }
      for(i=0;i<m;i++)
      {
           for(j=0;j<n;j++)
           {
                 if(j!=0)
                 {
                         if(a[i][j-1]>a[i][j])
                 continue;
                 }
                 if(j!=n-1)
                 {
                           if(a[i][j+1]>a[i][j])
                 continue;
                 }
                 if(i!=m-1)
                 {
                           if(a[i+1][j]>a[i][j])
                 continue;
                 }
                 if(i!=0)
                 {
                         if(a[i-1][j]>a[i][j])
                 continue;
                 }
                 printf("%d %d\n",i,j);
           }
      }
      getchar();
      getchar();
      getchar();
}
