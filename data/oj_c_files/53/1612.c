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

int main ()
{
    int m,n,i,bn=0,s=0;
    int a[300]={0};
    int b[300]={0};
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       for (m=0;m<i;m++)
       {
           if (a[i]==a[m])
           s=1;
       }
       if (s==0)
       {
                          b[bn]=a[i];
                          bn++;
           }
        s=0;
    }    
    printf ("%d",b[0]);
    for (i=1;i<bn;i++)
    {
        printf(",%d",b[i]);
    }
         return 0;
}
