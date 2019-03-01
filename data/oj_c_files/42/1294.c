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
//  HomeWork 10.29
//
//  Created by airjcy on 10/29/12.
//  Copyright (c) 2012 ???. All rights reserved.
//


void deleteNumber(int a[],int n,int atPlace)
{
    int i;
    for (i = atPlace; i < n-1; i ++) {
        a[i] = a[i+1];
    }
}

int main(int argc, const char * argv[])
{

    int n;
    cin >> n;
    int a[n]; //?????
    int i;
    for (i = 0; i < n; i ++) {
        cin >> a[i];
    }
    
    int numberToDelete;
    cin >> numberToDelete;

    
    for (i = 0; i < n; i ++) {
        if (a[i] == numberToDelete) {
            deleteNumber(a, n, i);
            i --;
            n --;
        }
    }
    
    for (i = 0; i < n - 1; i ++) {
        cout << a[i] << " ";
    }
    cout << a[n - 1]; 
    
    
    return 0;
}
