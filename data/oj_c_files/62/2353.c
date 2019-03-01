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
    int a[10000],n;
    for (int i=1;i<=9999;i++)
    {
        a[i]=getchar();
        if (a[i]==10)
        {
           n=i-1;
           break;
        }
    }
    for (int i=1;i<=n-1;i++)
    {
        if ((a[i]==' ')&&(a[i+1]==' '))
        {
           for (int j=i+1;j<=n-1;j++)
           a[j]=a[j+1];
           n=n-1;
           i=1;
        }
    }
    for (int k=1;k<=n;k++)
    putchar(a[k]);
    return 0;
} 

