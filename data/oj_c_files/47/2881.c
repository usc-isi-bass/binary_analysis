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
    int n,a[100],*p,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
     }
     p=a;
     for(i=n-1;i>=0;i--)
     {
                 if(i==n-1)
                 printf("%d",*(p+i));
                 else
                 printf(" %d",*(p+i));
       }
      return 0;
}