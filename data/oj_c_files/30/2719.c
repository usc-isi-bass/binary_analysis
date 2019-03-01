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
  int n,s=0,i=1;
  scanf("%d",&n);
  for  (i=1;i<=n;i++)
   { if (i%7==0)
      continue;
    else if ((i-7)%10==0)
      continue;
    else if (i==71)
      continue;
    else if (i==72)
      continue;
    else if (i==73)
      continue;
    else if (i==74)
      continue;
    else if (i==75)
      continue;
    else if (i==76)
      continue;
    else if (i==77)
      continue;
    else if (i==78)
      continue;
    else if (i==79)
      continue;
    else s=s+i*i;
   }
   printf("%d\n",s);
   return 0;
}
