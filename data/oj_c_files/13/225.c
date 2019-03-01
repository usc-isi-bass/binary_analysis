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
    int b,c,n,i;
    scanf ("%d",&n);
    int a[n];
    for (i=1;i<=n;i++)
     {
       scanf ("%d",&a[i]);
     }
    for (i=1,b=1;i<=n;i++,b++)
     { 
       if (b==1)
       printf("%d",a[i]);
       else
        {
        for (c=1;c<=i;c++)
         {
            if(a[c]==a[i])
             break;
         }
         if (c==i)
         printf (" %d",a[i]);
        }
     }
    getchar();     
    getchar();
}
