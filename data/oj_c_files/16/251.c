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
    int n,a,b,c,d;
    scanf("%d",&n);
    if(n/10000==1)
    printf("00001");
    else if(n/1000!=0)
    { a=n;
      b=a%10;
      a=a/10;
      c=a%10;
      a=a/10;
      d=a%10;
      a=a/10;
      printf("%d%d%d%d",b,c,d,a);
    }
    else if(n/100!=0)
    {
     a=n;
      b=a%10;
      a=a/10;
      c=a%10;
      a=a/10;
      printf("%d%d%d",b,c,a);
      }
      else if(n/10!=0)
       {
       a=n;
       b=a%10;
       a=a/10;
       printf("%d%d",b,a);
       }
       else printf("%d",n);
       return 0;
}
