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
  int n,i,j,m,t;
  int a[350];
  int avg=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    avg+=a[i];
    a[i]*=n;
  }
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
  if(avg-a[0]>a[n-1]-avg)
    m=avg-a[0];
  else
    m=a[n-1]-avg;
  for(i=t=0;i<n;i++)
    if(avg-a[i]==m || a[i]-avg==m)
    {
      if(t)
        printf(",");
      printf("%d",a[i]/n);
      t=1;
    }
  printf("\n");
  return 0;
}

