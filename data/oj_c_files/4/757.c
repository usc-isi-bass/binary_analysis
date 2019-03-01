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
//  Homework_12_10
//  ??????????
//  Created by airjcy on 12/10/12.
//  Copyright (c) 2012 airjcy. All rights reserved.
//


int main(int argc, const char * argv[])
{
    int row, col;
    cin >> row >> col;
    int a[row][col];
    int i,j;
    for (i = 0; i < row; i ++) {
        for (j = 0; j < col; j ++) {
            cin >> a[i][j];
        }
    }
    for(j = 0; j < col ; j++)
    {
        int t = 0;
        int k = j;
        while (t < row && k >= 0) {
            cout << a[t][k] << endl;
            t++;
            k--;
        }
    }
    for(i = 1; i < row; i++)
    {
        int t = i;
        int k = col - 1;
        while (t < row && k >= 0) {
            cout << a[t][k] << endl;
            t ++;
            k --;
        }
    }
    
    return 0;
}
