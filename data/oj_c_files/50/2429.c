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
    int a[12];
    int n,i;
    a[0]=13;
    a[1]=a[0]+31;
    a[2]=a[1]+28;
    for(i=3;i<8;i++)
    {
                     if(i%2==0)a[i]=a[i-1]+30;
                     else a[i]=a[i-1]+31;
     }
     for(i=8;i<12;i++)
     {
                      if(i%2==0)a[i]=a[i-1]+31;
                      else a[i]=a[i-1]+30;
     }
     scanf("%d",&n);
     n=6-n%7;
     for(i=0;i<12;i++)
     {
                      if(a[i]%7==n)printf("%d\n",i+1);
                      else ;
     }
     return 0;
}