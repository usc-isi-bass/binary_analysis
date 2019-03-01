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
  int k,n,i;
  scanf("%d%d",&n,&k);
  for (i=n*k;;i++)
  {
    int f=1,d=0,left=i;
    while (d<n)
    {
      if (left%n==k && (left-=(left-k)/n+k)>0) d++;
      else {f=0;break;}
     }
    if (f) {printf("%d",i);break;};
  }
  return 0;
}