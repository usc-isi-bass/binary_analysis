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
    int a[100][100],b[27],max= 0;
    int i , j , n , k , t ,len = 0;
    char str[100][27];
    scanf("%d",&n);
    memset( a, 0 ,sizeof(a) );
    memset( b ,0 ,sizeof(b) );
    for( i = 1;i <= n;i++ )
    {
      scanf( "%d",&a[i][1]);
      scanf("%s",str[i]);
      len = strlen (str[i]);
      for( j = 0;j < len;j++ )
      {
      k =  str[i][j]-'A'; 
       b[k]++;
       a[i][k+65] = 1;
      }
      }
      for( i = 0;i <= 25 ;i++ )
      {
      if( b[i] >max )
      {
         max= b[i];
         t = i; 
      }
      }
      printf("%c\n%d\n",t+'A',max);
      for( i = 1;i <= n;i++ )
      {
         if( a[i][t+'A']==1 )
         printf("%d\n",a[i][1]); 
      }
}
