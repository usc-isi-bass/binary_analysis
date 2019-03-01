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
      int a[25][25],n,m,day,i,j,k,square = 0 , lenth = 0;
        scanf("%d%d",&n,&m);
        memset ( a, 0, sizeof( a ) );
        for( i = 1 ;i <= n;i ++ )
        for( j = 1 ;j <= m;j ++ )
        scanf("%d",&a[i][j]);
        for( i = 1 ;i <= n;i ++ )
           {
              for( j = 1 ;j <= m;j ++ )
              {
                 if((a[i][j]>=a[i-1][j]) && (a[i][j]>=a[i+1][j]) && (a[i][j]>=a[i][j-1]) && (a[i][j]>=a[i][j+1]))
                 printf( "%d %d\n",i-1,j-1 );
              }
           }
}
