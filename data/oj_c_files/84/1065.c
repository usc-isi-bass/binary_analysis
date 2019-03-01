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
    int n,max,lmax,b,i;
    int x[100];
    scanf("%d",&n);
    scanf("%d",&x[0]);
    max=x[0];
    lmax=x[0];
    for(i=2;i<=n;i++)
    {
    scanf("%d",&x[i-1]);
    b=x[i-1];
    if (b>max)
       {  
         if(max>lmax)
         {
           lmax=max;
         }
         max=b;
       }
    else if (b>lmax)
        {
         lmax=b;
         }
    }
   printf("%d\n%d\n",max,lmax);
      scanf("%d",&n);
      return 0;
} 