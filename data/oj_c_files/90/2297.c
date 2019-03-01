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

int f(int m,int n)
{
    if((n==1)||(m==0))return 1;
    if(n>m)
    return f(m,m);
    if(n<=m)
    return f(m,n-1)+f(m-n,n);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",f(m,n));
    t--;
    }
}
