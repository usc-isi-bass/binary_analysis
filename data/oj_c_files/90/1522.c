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

int fun2(int m,int n);
int fun1(int m,int n);
int fun1(int m,int n)
{
    if (m<n) n=m;
    if (n==1) return 1;
    else if (n==0) return 0;
    else return (fun1(m,n-1) + fun2(m-n,n));
}
int fun2(int m,int n)
{
    if (m<n) n=m;
    if (m==1) return 1;
    else if(m==0) return 1;
    else return (fun1(m,n-1) + fun2(m-n,n));
}
main()
{
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if (a<b) b=a;
        printf("%d\n",fun1(a,b-1)+fun2(a-b,b));
    }
}
