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
 int a[1000],*p,i,j,n,m,k;
 scanf("%d%d",&n,&m);
 for( i = 0 ;i < n;i ++ )
 scanf("%d",&a[i]);
  p=&a[0];
  k = n - m % n;
 while(m--)
 {
    printf("%d ",*(p +n-m-1)  );
 }
 for( j = 0;j < k-1;j++ )
  {
    printf("%d ",*(p+j));
  }    
  printf("%d",*(p+k-1));

}
