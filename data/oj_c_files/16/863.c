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
    int a,b,c,d,e;
    scanf("%d",&a);
    if(a<10)
    {
       b=a;
       printf("%d",b);
    }
    else if(a<100)
    {
       b=a/10;
       c=a%10;
       printf("%d%d",c,b);
    }
    else if(a<1000)
    {
      b=a/100;
      c=(a%100)/10;
      d=a%10;
      printf("%d%d%d",d,c,b);
    }
    else if(a<10000)
    {
      b=a/1000;
      c=(a%1000)/100;
      d=(a%100)/10;
      e=a%10;
      printf("%d%d%d%d",e,d,c,b);
    }
    return 0;
}
