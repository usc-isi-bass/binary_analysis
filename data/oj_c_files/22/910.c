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
    int a,b,max2;
    max2=0;
    char sep;
    scanf("%d%c",&a,&sep);
    while (sep==',')
    {
        scanf("%d%c",&b,&sep);
        if(b>a)
        {
            max2=a;
            a=b;
        }
        else
        {
            if(b>max2&&b!=a)
            {
                max2=b;
            }
        }
    }
    if(max2!=0)
    {
        printf("%d",max2);
    }
    else
    {
        printf("No");
    }
    return 0;
}