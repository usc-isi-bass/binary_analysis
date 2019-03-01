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
    int l,a[1000];
    int f;
    for (int i=1;i<=999;i++)
    {
        a[i]=getchar ();
        if (a[i]==10)
        {
           l=i-1;
           break;
        }
    }
    for (int i=2;i<=l;i+=2)
    {
        for (int j=1;j<=l-i+1;j++)
        {
            f=0;
            for (int k=1;k<=i/2;k++)
            f=f+(a[j-1+k]==a[j+i-k]);
            if (f==i/2)
            {
               for (int k=1;k<=i;k++)
               putchar(a[j-1+k]);
               cout <<endl;
            }
        }
    }
    return 0;
}
