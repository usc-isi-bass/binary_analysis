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
      int a[1000][1000];
      int n,m,i,p,q,k,j,l,b;
      for(i=1;;i++)
      {
              scanf("%d %d",&n,&m);
              if(n==0)
              break;
               for(l=0;l<n;l++)
              {
                              a[0][l]=l+1;//?????????? 
              }
              for(k=1;k<n;k++)
              {
                               p=m%(n-k+1);//???K??????????? 
                               for(j=0;j<=n-k;j++)
                               {
                                             
                                             q=(p+j)%(n-k+1);//???????????? 
                                             a[k][j]=a[k-1][q];
                                             b=a[k][0];
                               }
              }
              printf("\n%d",a[n-1][0]);
      }
}