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
    int w;
    scanf("%d",&w);
    w=w+12;
    for(;w>7;)
    w=w-7;
    if(w==5)
    printf("%d\n",1);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",2);
    w=w+28;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",3);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",4);
    w=w+30;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",5);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",6);
    w=w+30;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",7);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",8);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",9);
    w=w+30;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",10);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",11);
    w=w+30;
    for(;w>7;)
    w=w-7;
    if(w==5)printf("%d\n",12);
    return 0;
}
