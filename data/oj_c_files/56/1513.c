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
    long int a;
    int x[5],i,j=0,n,m,y;
    scanf("%ld",&a);
    while(a>0)
         {x[j]=a%10;
          j++;
          a=a/10;
         }
    for(i=0;i<j;i++)
    printf("%d",x[i]);
}
