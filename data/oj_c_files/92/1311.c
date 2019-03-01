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

 
int N, a[1001], b[1001], f[1001][1001];
 
int main()
{
    scanf ("%d", &N);
    while (N != 0)
    {
	 for (int i = 1; i <= N; i ++)
   	     scanf ("%d", &a[i]);
   	 for (int i = 1; i <= N; i ++)
       scanf ("%d", &b[i]);
    sort(a + 1, a + N + 1);
    sort(b + 1, b + N + 1);
    for (int i = 1; i <= N; i ++)
        for (int j = 1; j <= N; j ++)
            if (a[i] > b[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else if (a[i] < b[j])
                f[i][j] = f[i][j - 1] - 1;
            else
                f[i][j] = max(f[i - 1][j - 1], f[i][j - 1] - 1);
    printf ("%d\n", f[N][N] * 200);
    scanf ("%d", &N);
}
    return 0;
}
