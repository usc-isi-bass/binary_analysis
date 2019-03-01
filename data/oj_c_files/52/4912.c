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

int a[105];
int main()
{
  int n,i,j;
  int m,k;
  scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(i = m;i >= 1;i --)
  {
     k = a[n - i + 1];      
    for(j = n - i + 1;j >= m - i + 2;j --)    
          a[j] = a[j-1];    
    a[m - i + 1] = k;        
  }
  for(i = 1;i < n;i ++)
     printf("%d ",a[i]);
  printf("%d",a[n]);
 return 0;
}
