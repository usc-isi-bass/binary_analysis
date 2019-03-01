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

int main ()
{
    int a,b,c,d,e,f,n;
    while (1==1)
    {
          scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
          if (a==0&&b==0&&c==0&&d==0
          &&e==0&&f==0)
          break;
          n=((12-a-1)*60+(60-b-1))*60+(60-c);
          n+=(d*60+e)*60+f;
          printf("%d\n",n);
    }


    return 0;
}
