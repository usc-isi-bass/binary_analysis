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
//  LZW_Work
//
//  Created by LZW on 9/28/12.
//
//



int main ()
{    
    int n;
    cin >> n;
    int a[100] = {0};
    int i;
    for (i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (i = n - 1; ; i--)
    {
        if(i == 0)
        {
            cout << a[0];
            break;
        }
        cout << a[i] << " ";
    }
}
