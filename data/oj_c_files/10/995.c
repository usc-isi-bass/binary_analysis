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

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int solve(int k,int h,int *p,int n)
{
    if(k==n) return 0;
    if(p[k]==h) return 1+solve(k+1, h, p,n);
    if(p[k]>h)   return solve(k+1, h, p, n);
    return max(solve(k+1, h, p, n),1+solve(k+1, p[k], p, n));
}
int main()
{
    int n;
    int p[25];
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("%d",solve(0, 100000, p, n));
    return 0;
}
