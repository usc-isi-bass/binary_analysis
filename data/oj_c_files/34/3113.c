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

int wer(int a)
{
      int n,i;
      n=a%2;
     if(n==1)
          i=3*a+1;
     else
          i=a/2;
     return i;
}
int main()
{
     int a;
     scanf("%d",&a);
if(a==1)
printf("End");
else
{
     for(;;)
     {
     if(a%2==1)
     {
                    printf("%d*3+1=%d\n",a,wer(a));
                     a=wer(a);
     }
     else
            {
                    printf("%d/2=%d\n",a,wer(a));
                    a=wer(a);
            }
      if(a==1)
      {printf("End");
      break;
      }}}
}
