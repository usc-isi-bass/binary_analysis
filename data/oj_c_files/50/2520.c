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

void panduan(int i,int num);
int i, num;
main()
{
    int w;
    scanf("%d",&w);
    i=1;
    num=(13+w-1);
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+28;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+30;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+30;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+30;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+30;
    panduan( i, num);i++;
}

void panduan(int i,int num)
{

    if(num%7==5)
    {printf("%d\n",i);
    }
}
