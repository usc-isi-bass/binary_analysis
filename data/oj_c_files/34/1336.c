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
 *????: 2012-11-18
 *??: ????
 */


void Try(int x)
{
    if (x != 1){
        if (x % 2 == 0){
            cout << x << "/2=" << x / 2 << endl;
            x /= 2;
        }//?1??
        else if (x % 2 != 0){
            cout << x << "*3+1=" << x * 3 + 1 << endl;
            x *= 3;
            x++;
        }//?1??
        Try(x);
    }
    else if (x == 1){
        cout << "End" << endl;
        return;
    }//1???
}

int main ()
{
    int x;
    cin >> x;
    Try(x);
    return 0;
}