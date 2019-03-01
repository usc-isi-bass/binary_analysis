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
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    if(n==1)
    printf("%d",a[0]);
    else
    {
    printf("%d",a[0]);
    for(i=1;i<n-1;i++)
    {
      for(j=0;j<i;j++)
      {
        if(a[i]==a[j])
        break;
      }
      if(i==j&&a[i]!=a[i-1])
      printf(" %d",a[i]);
    }
     for(j=0;j<n-1;j++)
      {
        if(a[n-1]==a[j])
        break;
      }
      if(n-1==j&&a[n-1]!=a[n-2])
      printf(" %d",a[n-1]);
      }
      getchar();
      getchar();
}
