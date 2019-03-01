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
    int n, m, ans;
    int solve(int n, int m);
    scanf("%d %d",&n, &m);
    while (!(n==0 && m==0))
    {
        ans = solve(n, m);
        if (!ans) ans = n;
        printf("%d\n", ans);
        scanf("%d %d", &n, &m);
    }
    return 0;
}
int solve(int n, int m)
{
    int ans;
    if (n==1) return 1;
    ans = (m % n + solve(n-1, m)) % n;
    if (!ans) ans = n;
    return ans;
}
