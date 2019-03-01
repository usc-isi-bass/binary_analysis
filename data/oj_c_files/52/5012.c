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
    int a[200], n, m;
    memset(a,-1,sizeof(a));
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int *p = a, *q = &a[n-m];
    while (p != q)
    {
        a[n++] = *p++;
    }
    cout << *q++;
    while (*q != -1)
    {
        cout << " " << *q++;
    }
    return 0;
}