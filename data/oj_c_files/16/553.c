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
    int a,b=0,i,j;
    scanf("%d",&a);
    i=log10(a);
    for(;a>0;)
    {
        b=b*10+a%10;
        a=a/10;
    }
    j=log10(b);
    for(;i>j;i--)
        printf("0");
    printf("%d",b);
    return 0;
}
