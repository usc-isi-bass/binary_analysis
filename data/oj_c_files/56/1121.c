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
  int n,m;
  scanf("%d",&n);
  if(n/10000>0&&n/10000<10)
  {m=n/10000+n/1000%10*10+n/100%10*100+n/10%10*1000+n%10*10000;
  printf("%d",m);}
  if(n/1000>0&&n/1000<10)
  {m=n/1000+m/100%10*10+m/10*100+m%10*1000;
   printf("%d",m);}
  if(n/100>0&&n/100<10)
   { m=n/100+n/10%10*10+n%10*100;
    printf("%d",m);}
   if(n/10<10&&n/10>0)
    { m=n/10+n%10*10;
   printf("%d",m); }
return 0;
}