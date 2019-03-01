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

main ()
{
     int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
     int b,c,d,i;
     scanf("%d %d %d",&b,&c,&d);
     if ((b%4==0 && b%100!=0) || (b%100==0 && b%400==0))
     {
                 a[2]=29;
     }
     for (i=1;i<c;i++)
     {
         d=d+a[i];
     }
     printf("%d",d);
}
                      
