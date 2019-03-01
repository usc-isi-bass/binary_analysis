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
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0; i<=n-1;i++)
  {
    scanf("\n%d",&a[i]);
  }
  int A[20];
  A[0]=1;
  A[1]=1;
  for(i=2;i<=19;i++)
  {
    A[i]=A[i-1]+A[i-2];
  }
  for(i=0;i<=n-1;i++)
  {
    a[i]=A[a[i]-1];
  }
  printf("%d",a[0]);
  for(i=1;i<=n-1;i++)
  {
    printf("\n%d",a[i]);
  }
}
