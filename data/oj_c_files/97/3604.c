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
    int n,a,b,c;
    scanf("%d",&n);
    a=n%10;
    b=(n%100-n%10)/10;
    c=n/100;
    printf("%d\n",c);
    if(b<5)
    {
        printf("%d\n%d\n%d\n",0,b/2,b-b/2*2);
    }
    else
    {
        printf("%d\n%d\n%d\n",1,(b-5)/2,b-(b-5)/2*2-5);
    }
    if(a<5)
    {
        printf("%d\n%d\n",0,a);
    }
    else
    {
        printf("%d\n%d\n",1,a-5);
    }
    return 0;
}