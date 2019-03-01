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
  int n;
  scanf("%d",&n);
  int a[300];
  int i;
  for(i=0;i<300;i++)
  {
    a[i]=0;
  }
  int *p;
  for(p=a;p<a+n;p++)
  {
    scanf("%d ",p);
  }
  p=a;
  int *q;
  for(;p<a+n-1;p++)
  {
    for(q=p+1;q<a+n;q++)
    {
      if(*q==*p) *q=0;
     }
   }
  p=a;
 printf("%d",*p);
  for(p=p+1;p<a+300;p++)
  {
    if(*p!=0)
    printf(",%d",*p);
  }
return 0;
}
    