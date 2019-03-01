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
    int n,a,i;
    scanf("%d",&n);
    for (i=1;i<=5;i++)
    {
        a=n%10;
        printf("%d",a);
        n=(n-a)/10;
        if (n==0)
        break;
    }
}