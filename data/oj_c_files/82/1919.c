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

/**
 * @file 6.cpp
 * @author ??? 1300012960
 * @date 2013-10-23
 * @description
 * ??????: ???? */
int main()
{
    int n, p1, p2, t1 = 0, t2 = 0;  // p1 p2????? ??? t1??????? t2????????
    
    cin >> n;  // ?????
    for (int j = 1; j <= n; j++)
    {
        cin >> p1 >> p2;
        if (p1 >= 90 && p1 <= 140 && p2 >= 60 && p2 <= 90)  // ?????t2+1
            t2++;
        else  // ?????0???
        {
            t1 = max(t1, t2);  // ??t1?????????
            t2 = 0;    // t2???0
        }
    }
    t1 = max(t1, t2);   // ?????????? ??????
    cout << t1;
    return 0;
}