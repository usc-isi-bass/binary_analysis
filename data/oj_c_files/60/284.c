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
    int d=1,n,j,i,c;
    scanf ("%d",&n);
    int a[65535];
    for (j=3;j<=n;j++)
    {
     for (i=1,c=0;i<=j;i++)
     {
        if (j%i==0)
        c=c+1;
     }
     if(c==2)
     {
        a[d]=j;
        d=d+1;
     }
    }
    if (n<=4)
    printf("empty");
    else 
     {
         for (i=1;i<=n;i++)
         {
           if (a[i+1]-a[i]==2)
           printf ("%d %d\n",a[i],a[i+1]);
         }
     }
     getchar();
     getchar();
}
    