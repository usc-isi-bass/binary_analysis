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
//  10.15 homework
//  ??????

//  Created by airjcy on 10/8/12.
//  Copyright (c) 2012 airjcy. All rights reserved.
//






int main(int argc, const char * argv[])
{
    int n; //????
    cin >> n;
    int i;
    for (i = 0; i < n; i++) {
        int a = 1;
        int b = 1;
        int num; //??????
        cin >> num;
        int j;
        int t;
        for (j = 1; j < num; j ++) {
            t = b;
            b = a + b;
            a = t;
        }
        cout << a << endl;
    }

}