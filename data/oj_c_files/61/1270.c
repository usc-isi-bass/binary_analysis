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

//
//  main.cpp
//  ??????
//
//  Created by Hsu Tzuyen on 12-11-17.
//  Copyright (c) 2012? Hsu Tzuyen. All rights reserved.
//

int f(int n)
{
    int a[21];
    a[1]=1;
    a[2]=1;
    for (int i = 3; i <=n; i++)
        a[i] = a[i-1] + a[i-2];
    return a[n];
}
int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cout << f(a) << endl;
    }
    return 0;
}