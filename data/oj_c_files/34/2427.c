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
    int a,b,c;
    scanf ("%d",&a);
    if (a==1)
    printf("End");
    else
    {
    do
    {b=a%2;
    if (b==0)
    {
    c=a/2;
    printf ("%d/2=%d\n",a,c);
    a=a/2;
    }
    else 
    {
    c=a*3+1;
    printf ("%d*3+1=%d\n",a,c);
    a=a*3+1;
    }
}

    while (a>1);

    printf("End");
}
    getchar();
    getchar();
}
