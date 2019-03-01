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

/*
 *???: 1.cpp
 *??????
 *????: 2012-10-19
 *??: ???????????n?n???????????????a??????
 */


int main ()
{
    int n = 0, iNum = 0;
    int a[20] = {1,1};
    for (int i = 2; i < 20; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }                                           //??????????
    cin >> n;
    int b[n];
    for (int j = 1; j <= n; j++)
    {
        cin >> iNum;
        b[j-1]= a[iNum-1];
    }                                           //??????
    for (int k = 1;k <= n;k++)
    {
        cout << b[k-1] << endl;
    }                                           //??????
    return 0;
}