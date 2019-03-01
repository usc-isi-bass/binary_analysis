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
    int n, num[90]={0}, a[20001]={0}, i;
    cin >> n;
    cin >> a[1];
    num[a[1]-10]++;
    cout << a[1];
    for (i=2;i<=n;i++)
    {
        cin >> a[i];
        num[a[i]-10]++;
        if (num[a[i]-10]==1) cout << " " << a[i];
    }
    return 0;
} 
