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
    int w,t,i;
    int a[13];
    scanf("%d",&w);
    a[1]=31;
    a[2]=28;
    a[3]=31;
    a[4]=30;
    a[5]=31;
    a[6]=30;
    a[7]=31;
    a[8]=31;
    a[9]=30;
    a[10]=31;
    a[11]=30;
    a[12]=31;
    t=0;
    i=0;
    while (t<=11)
    {
    i=i+1;
    t=t+1;
    scanf("%d",&a[i]);
      if(w==7)
        {
         printf("%d\n",t);
         w=((w+a[i])%7)+7;
         }
      else
         w=((w+a[i])%7)+7;
     }

       return 0;
} 