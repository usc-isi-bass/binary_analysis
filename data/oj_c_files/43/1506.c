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

int zhishu(int n)
{
    int i,m;
    for(i=2;i<n;i++)
    {
       if (n%i==0)
        {m=0;
        break;}
    }
    if (i==n)
     m=1;
     return m;
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=3;i<=n/2;i++)
    {
            a=zhishu(i);
            b=zhishu(n-i);
            if (a==1&&b==1)
             printf("%d %d\n",i,n-i);
    }
    getchar();
    getchar();
    getchar();
    getchar();
}
