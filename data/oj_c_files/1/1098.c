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
 *???: ????.cpp
 *??????
 *????: 2012-11-12
 *??: ????????????
 */


int count(int num, int m)
//???????????????????a1????????????
{
    if (num % m != 0) return 0;
    
    if (num == m) return 1;
    else {
        int counter = 0;
        for (int i = m; i <= num / m; i++){
                counter += count(num / m, i);
        }
        return counter;
    }
}

int main ()
{
    int n,num;
    cin >>n;
    for (int i = 1; i <= n; i++){
        int counter = 0;
        cin >> num;
        for (int i = 2; i <= num; i++)
            counter += count(num,i);//a1???2???m???
        cout << counter << endl;
    }
    return 0;
}