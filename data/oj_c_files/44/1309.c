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

int reverse(int num)
{
    int m=0,i,j,k,n,p,x=0;
    if (num<0) {num=-num;x=1;}
    n=num;
    for (j=0;n>=1;j++)
    n=n/10;
    for (i=0;i<j;i++)
    {
        n=1;
        p=num%10;
        num=(num-p)/10;
        m=10*m+p;
    }
    return (x==1)?-m:m;
}
int main()
{
    int i,n,j;
    for (i=0;i<6;i++)
    {
        scanf("%d",&n);
        printf("%d\n",reverse(n));
    }
}

