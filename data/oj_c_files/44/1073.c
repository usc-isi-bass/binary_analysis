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

int reverse(int b)
{
    int a=0;
    while (b>0)
    {
        a=a*10+b%10;
        b=b/10;
    }
    return a;
}
int main()
{
    int x,tag=1,i;
    for (i=0;i<6;i++)
    {
        scanf("%d",&x);
        if (x<0)
        {
            printf("%d\n",-reverse(-x));
        }
        else
        {
            printf("%d\n",reverse(x));
        }

    }
    return 0;
}
