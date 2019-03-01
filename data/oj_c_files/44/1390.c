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

main()
{
    int fan(int x);
    int a[6];
    int b[6];
    int i=0;
    do
    {
        scanf("%d",&a[i]);
        b[i]=fan(a[i]);
        i=i+1;
    }
    while(i<6);
    i=0;
    do
    {
        printf("%d\n",b[i]);
        i=i+1;
    }
    while(i<6);
}
int fan(int x)
{
    int y;
    y=0;
    do
    {
        y=x%10+10*y;
        x=x/10;
    }
    while(x!=0);
    return(y);
}
