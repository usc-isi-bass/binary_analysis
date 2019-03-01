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
  int a=0,b=0,c,d,n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
{ scanf("%d",&d);
if (a<d)
 {
  c=a;
  a=d;
  d=c;}
  if(a<b)
  {c=a;
  a=b;
  b=c;}
  if(b<d)
  {c=b;
  b=d;
  d=c;
 }
}
printf("%d\n%d\n",a,b);
return 0;
}
