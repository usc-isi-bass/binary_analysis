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

int f(int x)
{
    int s;
    if(x==1||x==2)
    {
        s=1;
    }
    else
    {
        s=f(x-1)+f(x-2);
    }
    return s;
}
main()
{
    int n,i;
    int a[25];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1||a[i]==2)
        {
            printf("1\n");
        }
        else
        {
            printf("%d\n",f(a[i]));
        }
    }
}
