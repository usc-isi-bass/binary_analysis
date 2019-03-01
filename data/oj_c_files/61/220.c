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

int F(int n)
{
    int f;
    if(n==1||n==2)
    {
        f=1;
    }
    else
    {
        f=F(n-1)+F(n-2);
    }
    return (f);
}
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        printf("%d\n",F(a));
    }
    return 0;
}
