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

int a[20];
int f(int i)
{
    if (i==1||i==2)
    {
       a[i]=1;
       return 1;
    }
    else
    {
        a[i]=f(i-1)+f(i-2);
        return (f(i-1)+f(i-2));
    }
}
main()
{
    int n,i,b;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&b);
        printf("%d\n",f(b));
    }
    getchar();
    getchar();
}       