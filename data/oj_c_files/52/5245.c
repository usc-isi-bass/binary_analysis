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
 * xunhuanyidong.cpp
 *
 *  Created on: 2012-12-14
 *      Author: asus
 */

int main()
{
    int n = 0, m = 0;
    int a[205] = {0};
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> *(a + i);
    for(int i = m + n; i >= m + 1; i--)//??
        *(a + i) = *(a + i - m);
    for(int i = 1; i <= m ; i++)
        *(a + i) = *(a + i + n);
    for(int i = 1; i < n; i++)
        cout << *(a + i) << " ";
    cout << *(a + n) << endl;
    return 0;
}