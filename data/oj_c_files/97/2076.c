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
    int a,b,c,d,e,f,n;
    scanf("%d",&n);
    a=n/100;
    b=(n-a*100)/50;
    c=(n-a*100-b*50)/20;
    d=(n-a*100-b*50-c*20)/10;
    e=(n-a*100-b*50-c*20-d*10)/5;
    f=n-a*100-b*50-c*20-d*10-e*5;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
   scanf("%d",&a);
    return 0;
}
