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
    int n,a,b,i,x,y;
    scanf("%d",&n);
    x=0;
    y=0;
    i=1;
    while(i<=n)
    {
               scanf("%d %d",&a,&b);
               if(a<=140&&a>=90&&b<=90&&b>=60)
               {
               x=x+1;
               if(y<x)
               {
                      y=x;
               }
               }
               else x=0;
               i++;
    }
    printf("%d",y);
    scanf("%d",&n);
    return 0; 

} 