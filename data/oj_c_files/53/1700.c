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
  int a[100],n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      a[j]=-1;
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]!=-1)
    printf("%d",a[i]);
    break;
  }
  i=i+1;
  for(;i<n;i++)
  {
    if(a[i]!=-1)
    printf(",%d",a[i]);
  }
  return 0;
}
