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
 int a,b,i;
 scanf("%d",&a);
 b=a%10;
 printf("%d",b);
 a=a/10;
 if (a!=0)
  {
    b=a%10;
    printf("%d",b);
    a=a/10;
     if (a!=0)
      {
        b=a%10;
        printf("%d",b);
        a=a/10;
         if (a!=0)
          {
            b=a%10;
            printf("%d",b);
            a=a/10;
             if (a!=0)
             {
              b=a%10;
              printf("%d",b);
              a=a/10;
              }
           }
      }
    }
 return 0;
}