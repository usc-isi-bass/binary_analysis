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
    int n,a,b,c,sum;
    scanf("%d",&n);
    if(n%3==0)
    a=3;
    else
    a=0;
    if(n%5==0)
    b=5;
    else
    b=0;
    if(n%7==0)
    c=7;
    else
    c=0;
    sum=a+b+c;
    switch(sum)
    {
    case 0:printf("n");break;
    case 7:printf("7");break;
    case 5:printf("5");break;
    case 3:printf("3");break;
    case 12:printf("5 7");break;
    case 8:printf("3 5");break;
    case 10:printf("3 7");break;
    case 15:printf("3 5 7");break;
    return 0;
    }
}