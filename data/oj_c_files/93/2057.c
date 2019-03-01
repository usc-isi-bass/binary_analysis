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
    int n,tot=0,b=0;
    scanf("%d",&n);
    if(!(n%3))  tot++;
    if(!(n%5))  tot++;
    if(!(n%7))  tot++;
    if(!(n%3))
    {
        printf("3");
        if(tot-1)
        {
            putchar(' ');
            tot--;
        }
        b=1;
    }
    if(!(n%5))
    {
        printf("5");
        if(tot-1)
        {
            putchar(' ');
            tot--;
        }
        b=1;
    }
    if(!(n%7))
    {
        printf("7");
        if(tot-1)
        {
            putchar(' ');
            tot--;
        }
        b=1;
    }
    if(!b)
    {
        putchar('n');
    }
    putchar('\n');
    return 0;
}
