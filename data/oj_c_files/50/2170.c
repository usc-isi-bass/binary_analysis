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
    int w,i,a[12];
    scanf("%d",&w);
    if(w<3)
       a[1]=w+5;
    else
       a[1]=w-2;
    a[2]=a[1]+31%7;
    if(a[2]>7)
       a[2]-=7;
    a[3]=a[2];
    a[4]=a[3]+31%7;
    if(a[4]>7)
       a[4]-=7;
    a[5]=a[4]+30%7;
    if(a[5]>7)
       a[5]-=7;
    a[6]=a[5]+31%7;
    if(a[6]>7)
       a[6]-=7;
    a[7]=a[6]+30%7;
    if(a[7]>7)
       a[7]-=7;
    a[8]=a[7]+31%7;
    if(a[8]>7)
       a[8]-=7;
    a[9]=a[8]+31%7;
    if(a[9]>7)
       a[9]-=7;
    a[10]=a[9]+30%7;
    if(a[10]>7)
       a[10]-=7;
    a[11]=a[10]+31%7;
    if(a[11]>7)
       a[11]-=7;
    a[12]=a[11]+30%7;
    if(a[12]>7)
       a[12]-=7;
    for(i=1;i<=12;i++)
       if(a[i]==5)
          printf("%d\n",i);
    return 0;
}