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
    int a[21][21];
    int i,j,k,m,n;
    for(i=0;i<21;i++)
     for(j=0;j<21;j++)
      a[i][j]=0;
    scanf("%d %d",&m,&n);
    for(i=1;i<m+1;i++)
     for(j=1;j<n+1;j++)
      scanf("%d",&a[i][j]);
    for(i=1;i<m+1;i++)
     {
         for(j=1;j<n+1;j++)
          {
              if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
                printf("%d %d\n",i-1,j-1);
          }
     }



}
